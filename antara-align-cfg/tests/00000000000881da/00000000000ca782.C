#include<stdio.h>
#include<string.h>

main() {
    int i;
    char varCh[50000];
    
    gets(varCh);
    
    for(i=0; i<strlen(varCh); i++) {
        if(varCh[i]==69)
            varCh[i]=83;
        else
            varCh[i]=69;
    }
    
    puts(varCh);
}