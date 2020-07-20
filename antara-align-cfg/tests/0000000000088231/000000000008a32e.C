#include <stdio.h>
#include <stdlib.h>

int main(){
    char n[101];
    char r[101];
    int t;

    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        scanf("%s",&n);
        for(int j=0;n[j]!='\0';j++){
            if(n[j]=='4'){
                n[j] = '3';
                r[j] = '1';
            } else r[j] = '0';
        }
        long long nll = atoll(n);
        long long rll = atoll(r);
        printf("Case #%d %lld %lld\n",i,nll,rll);
    }
    return 0;
}