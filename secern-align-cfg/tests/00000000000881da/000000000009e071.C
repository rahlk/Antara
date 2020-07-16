#include<stdio.h>

#define MAX 5002

int main() {
    int t, n;
    int i, j, total_size, size, size2;
    char p[MAX];
    char out[MAX];
    int end;

    scanf("%d", &t);
    for ( i=0; i < t; i++ ) {
        scanf("%d", &size);
        size = 2*size-2;
        total_size = size;

        printf("Case #%d: ", i+1);

        do {
            fgets(p, MAX, stdin);

            size2 = strlen(p);

            if ( p[size2-1] == '\n' ) {
                size2--;
                p[size2] = '\0';
            }

            for (j=0; j < size2; j++) {
                out[j] = ( p[j] == 'E' ) ? 'S' : 'E';
            }

            out[size2] = '\0';

            printf("%s", out);

            total_size -= size2;

        } while ( total_size > 0 );

        printf("\n");
    }

    return 0;
}
