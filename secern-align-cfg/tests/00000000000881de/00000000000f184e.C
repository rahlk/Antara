#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// Dat Bae
//

typedef struct {
    int n; // Total number of nodes
    int w; // Number of working nodes
    int done; // If this part is complete
} Part;

void initPart(Part *part, int n, int w) {
    part->n = n;
    part->w = w;
    part->done = w == n || w == 0;
}

void fillRequest(char *request, Part parts[], int partsSize) {
    for(int i=0; i<partsSize; i++) {
        int n = parts[i].n;
        memset(request, '0', n/2);
        memset(request+n/2, '1', n-n/2);
        request += n;
    }
    *request = '\0';
}

int numof0(char *s, int size) {
    int n=0;
    while(n < size && s[n] == '0') {
        n++;
    }
    return n;
}

int processResponse(char *response, Part parts[], int partsSize, Part newParts[]) {
    int newPartsSize = 0;

    for(int i=0; i<partsSize; i++) {
        int w = parts[i].w;
        int n = parts[i].n;

        if(!parts[i].done) {
            // Split the part in 2
            int n0 = numof0(response, w);
            int n1 = w - n0;

            initPart(&newParts[newPartsSize++], n/2, n0);
            initPart(&newParts[newPartsSize++], n-n/2, n1);
        }
        else {
            // Just copy the part
            newParts[newPartsSize++] = parts[i];
        }

        response += w;
    }
    return newPartsSize;
}

int done(Part parts[], int partsSize) {
    for(int i=0; i<partsSize; i++) {
        if(parts[i].done == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    for(int t=0; t<T; t++) {
        int N, B, F;
        scanf("%d %d %d", &N, &B, &F);

        char request[N+1];
        char response[N-B+1];

        Part parts0[N];
        Part parts1[N];

        Part *parts = parts0;
        initPart(&parts[0], N, N-B);
        int partsSize = 1;

        while(!done(parts, partsSize)) {
            fillRequest(request, parts, partsSize);
            printf("%s\n", request);
            fflush(stdout);

            gets(response);
            if(response[0] == '\0') {
                gets(response);
            }
            Part *newParts = parts == parts0 ? parts1 : parts0;
            partsSize = processResponse(response, parts, partsSize, newParts);
            parts = newParts;
        }

        int broken[B];
        int brokenIndex = 0;
        int index = 0;
        for(int i=0;i<partsSize; i++) {
            if(parts[i].w == 0) {
                for(int j=0; j<parts[i].n; j++) {
                    broken[brokenIndex++] = index+j;
                }
            }
            index += parts[i].n;
        }

        if(brokenIndex != B) {
            printf("Ooops...: %d\n", brokenIndex);
        }

        for(int i=0; i<B; i++) {
            printf("%d ", broken[i]);
        }
        printf("\n");
        fflush(stdout);
    }

    return 0;
}

