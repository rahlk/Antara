#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int T, N;
    int i, j, k;
    int flag;

    char s1[1000000], s2[1000000];

    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d", &N);

        for(j = N-1; j > 1; j--){
            sprintf(s1, "%d", j);
            sprintf(s2, "%d", N-j);
            
            flag = 0;
            for(k = 0; k < strlen(s1); k++)
                if(s1[k] == '4') flag = 1;

            for(k = 0; k < strlen(s2); k++)
                if(s2[k] == '4') flag = 1;

            if(flag == 0){
                printf("Case #%d:%s %s\n", i+1, s1, s2);
                break;
            }
        }
    }

    return 0;
}