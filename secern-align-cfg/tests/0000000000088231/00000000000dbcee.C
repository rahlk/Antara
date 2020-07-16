#include<stdio.h>
int main(){
    int T;
    int N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        printf("%d %d",N/2-11,N/2+11);
    }
    return 0;
}