#include<stdio.h>
int main(){
    int T;
    int N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        if(N<100)
            printf("Case #%d: %d %d\n",i+1,N/2,N/2);
        else
            printf("Case #%d: %d %d\n",i+1,(N)/2+55,(N)/2-55);
    }
    return 0;
}