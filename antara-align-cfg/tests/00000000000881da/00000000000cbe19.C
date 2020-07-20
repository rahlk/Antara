#include<stdio.h>
#include<string.h>
#include<malloc.h>

main() {
    int varCnt, varLen, i, j;
    char * varCh;
    
    for(i=0; i<varCnt; i++) {
        scanf("%d", varLen);
        varCh = (char*) malloc(varLen * sizeof(char));
        
        gets(varCh);
        for(j=0; j<strlen(varCh); j++) {
            if(varCh[i]==69)
                varCh[i]=83;
            else
                varCh[i]=69;    
        }
        printf("Case #%d: %s", i+1, varCh);
    }
}