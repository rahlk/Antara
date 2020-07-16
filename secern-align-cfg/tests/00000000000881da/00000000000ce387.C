#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int T, N;
    int i, j;
    int flag;

    char P[1000000], r[1000000];

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);
        fgets(P, 10000, stdin);

        for(j=0;j<strlen(P);j++){
            if(P[j]=='E')
                r[j] = 'S';
            else if(P[j]=='S')
                r[j] = 'E';
        }

        printf("Case #%d: %s\n", i+1, r);

    }

    return 0;
}