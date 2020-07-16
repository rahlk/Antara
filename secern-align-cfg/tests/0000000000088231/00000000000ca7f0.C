#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int test, i;
long int n, m;

bool isFourThere(long int num){
    while(num > 0){
        if(num%10 == 4){
            break;
        }
        else num = num/10;
    }
    return (num > 0);
}

int main(){
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%ld",&n);
        for (m=1;m<n;m++){
            if(!isFourThere(m)){
                if(!isFourThere(n-m)){
                    printf("Case #%d: %ld %ld\n",i,m,(n-m));
                    break;
                }
            }
        }
    }
    return 0;
}