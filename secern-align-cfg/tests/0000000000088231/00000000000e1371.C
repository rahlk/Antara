#include <stdio.h>

int check4(int a){
    int temp=a%10;
    while(a!=0){
        if(temp==4){
            return 0;
        }
        a=a/10;
        temp=a%10;
    }
    return 1;
}

int main(){
    int N,T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        for(int k=1;k<=N/2;k++){
            if(check4(k)&&check4(N-k)){
                printf("Case #%d: %d %d",i+1,k,N-k);
            }
        }
    }
}