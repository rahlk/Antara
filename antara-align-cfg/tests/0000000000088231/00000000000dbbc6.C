#include<stdio.h>
int main(){
    int T;
    int N;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&N);
        printf("%d %d",N/2,N/2);
    }
    return 0;
}