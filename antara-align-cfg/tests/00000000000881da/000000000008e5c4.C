#include <stdio.h>

char L[100005];
char Y[100005];


int main(void) {
    long T;
    scanf("%ld",&T);
    long i, N;
    for (i = 0; i < T; i++) {
        scanf("%ld",&N);
        scanf("%s",L);
        size_t j;
        for (j = 0; L[j]; j++) {
            if (L[j] == 'E')
                Y[j] = 'S';
            else
                Y[j] = 'E';
        }
        printf("Case #%ld: %s\n",i+1,Y);
    }

}
