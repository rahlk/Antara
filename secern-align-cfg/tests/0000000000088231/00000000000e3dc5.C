#include<stdio.h>
int main(){
    int T;
    int N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        if(N%2==0)
            printf("Case #%d: %d %d",i+1,N/2,N/2);
        else
            printf("Case #%d: %d %d",i+1,(N+1)/2,(N-1)/2);
    }
    return 0;
}