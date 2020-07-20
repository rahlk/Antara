#include <stdio.h>
#include <string.h>

int main(){
    int tests;
    char n[101],a[101],b[101];
    if(scanf("%d",&tests)){}
    for(int i = 1; i <= tests; i++){
        if(scanf("%s",n)){}
        strcpy(a,n);
        strcpy(b,n);
        for(int j = 0; j < strlen(n); j++){
            if(n[j]=='4'){
                n[j] = '3';
                b[j] = '1';
            }
            else{
                b[j] = '0';
            }
        }
        printf("Case #%d: %s %s\n",i,n,b);
    }
    return 0;
}