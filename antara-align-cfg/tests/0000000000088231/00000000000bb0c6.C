#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXDIM 101

int main() {

    char str[MAXDIM];
    char B[MAXDIM];
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        scanf("%s", str);
        int n = strlen(str);
        B[n] = '\0';
        for(int i=0; i<n; i++)
            if(str[i] == '4') {
                str[i] = '3';
                B[i] = '1';
            }
            else
                B[i] = '0';
        
        printf("Case #%d %s ", t+1, str);
        int start = 0;
        while(B[start] == '0') start++;
        for(int i=start; i<n; i++)
            printf("%c", B[i]);
        printf("\n");
    }

    return 0;
}