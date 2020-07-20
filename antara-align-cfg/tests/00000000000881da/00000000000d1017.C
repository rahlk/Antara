#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

main() {
    int varCnt, varLen, i, j;
    char* varCh;
    
    scanf("%d", &varCnt);
    for(i=0; i<varCnt; i++) {
        scanf("%d", &varLen);
        getchar();
        
        varCh = (char*)malloc(varLen*sizeof(char));
        scanf("%[^\n]%*c", varCh);
        
        for(j=0; j<strlen(varCh); j++) {
            if(varCh[j]==69)
                varCh[j]=83;
            else
                varCh[j]=69;    
        }
        printf("Case #%d: %s\n", i+1, varCh);
        free(varCh);
    }
}