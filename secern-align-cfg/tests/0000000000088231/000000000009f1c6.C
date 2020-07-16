#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int T, t, nlen;
    char N[101], N2[101];
    
    scanf(“%d”, &T);
    for (t=1; t<=T; t++){
        scanf(“%d”, N);
        nlen=strlen(N);
        for(i=0; i<nlen; i++){
            if(N[i]==’4’){
                N[i]=‘2’;
                N2[i]=‘2’;
            } else {
                N2[i]=‘0’;
            }
        }
        N2[i]=‘\0’;
        printf(“Case #%d: %d %d”, t, atoi(N), atoi(N2))
    }
}