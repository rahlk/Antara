#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int test, i;
int n, m;

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
    for(i=1;i<=test;i++){
        scanf("%d",&n);
        for (m=1;m<n;m++){
            if(!isFourThere(m)){
                if(!isFourThere(n-m)){
                    printf("Case #%d: %d %d\n",i,m,(n-m));
                    break;
                }
            }
        }
    }
    return 0;
}