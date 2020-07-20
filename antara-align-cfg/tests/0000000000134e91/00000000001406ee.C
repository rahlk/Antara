#include <stdio.h>
#include <string.h>

void completeSet(char set[5]) {
    set[4] = '\0';
    for(char i='A'; i<='E'; i++) {
        if(strchr(set, i) == NULL) {
            set[4] = i;
            break;
        }
    }
}

void findMissing(char missing[2][5], char figures[119][5]) {
    int numFound = 0;

    for(char i1='A'; i1<='E'; i1++)
        for(char i2='A'; i2<='E'; i2++) if(i1 != i2)
            for(char i3='A'; i3<='E'; i3++) if(i3!=i1 && i3!=i2)
                for(char i4='A'; i4<='E'; i4++) if(i4!=i1 && i4!=i2 && i4!=i3) {
                    char set[] = {i1, i2, i3, i4};
                    int found = 0;
                    for(int i=0; i<118; i++) {
                        if(strncmp(figures[i], set, 4) == 0) {
                            found = 1;
                            break;
                        }
                    }

                    if(!found) {
                        memcpy(missing[numFound], set, 4);
                        completeSet(missing[numFound]);
                        numFound++;
                        if(numFound == 2) return;
                    }
                }

    printf("findMissing ERROR\n");
}

char readLetter(int setPos, int charPos) {
    int pos = 5*setPos + charPos + 1;

    printf("%d\n", pos);
    fflush(stdout);

    char c[2];
    scanf("%s", c);

    return *c;
}

int main() {
    int T, F;
    scanf("%d %d", &T, &F);

    for(int t=0; t<T; t++) {
        char figures[119][5];
        memset(figures, '\0', 119*5);

        for(int i=0; i<118; i++) {
            for(int j=0; j<4; j++) {
                figures[i][j] = readLetter(i, j);
            }
        }

        char missing[2][5];
        findMissing(missing, figures);

        //printf("DEBUG: %.5s %.5s\n", missing[0], missing[1]);

        char *result;
        for(int j=0; j<4; j++) {
            if(missing[0][j] != missing[1][j]) {
                char c = readLetter(118, j);
                result = missing[(c != missing[0][5]) ? 0 : 1];
            }
        }

        printf("%.5s\n", result);
        fflush(stdout);

        char c[2];
        scanf("%s", c);

        if(*c != 'Y') {
            printf("ERROR\n");
            return -1;
        }
    }

    return 0;
}
