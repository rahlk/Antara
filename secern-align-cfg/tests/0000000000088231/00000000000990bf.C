#include <stdio.h>

int main(){
    int tests;
    char n[101],a[101],b[101];
    if(scanf("%d",&tests)){}
    for(int i = 1; i <= tests; i++){
        if(scanf("%s",n)){}
        for(int j = 0; j < sizeof(n)/sizeof(n[0]); j++){
            if(n[j]=='4'){
                a[j] = '3';
                b[j] = '1';
            }
            else{
                a[j] = n[j];
                b[j] = '0';
            }
        }
        printf("Case #%d: %s %s\n",i,a,b);
    }
    return 0;
}