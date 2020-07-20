#include <stdio.h>

int check4(int a){
    int n=1;
    int temp=a%10;
    while(a!=0){
        if(temp==4){
            return n;
        }
        a=a/10;
        temp=a%10;
        n=n*10;
    }
    return 0;
}

int main(){
    int N,T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        for(int k=1;k<=N;k=k){
            if(check4(k)==0&&check4(N-k)==0){
                printf("Case #%d: %d %d\n",i+1,k,N-k);
                break;
            }
            else if (check4(k)==0){
                k=k+check4(N-k);
            }
            else{
                k=k+check4(k);
            }
        }
    }
}