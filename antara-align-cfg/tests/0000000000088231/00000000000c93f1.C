#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int test, counter;
long long int n, m, next;

bool isFourThere(int num){
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
    counter = test;
    while(test--){
        scanf("%lld",&n);
        for (m=1;m<n;m++){
            if(!isFourThere(m)){
                next = n-m;
                if(!isFourThere(next)){
                    printf("Case #%d: %lld %lld\n",(counter-test),m,(n-m));
                    break;
                }
            }
        }
    }
    return 0;
}