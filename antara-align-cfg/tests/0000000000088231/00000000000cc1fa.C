#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int N[t];
    int i;
    for(i=0;i<t;i++){
        scanf("%d",&N[i]);
    }
    findT(t,N);
}
int findT(int T,int N[]){
    int i;
    for(i=0;i<T;i++){
        printf("Case #%d: %d %d",i+1,3,N[i]-3);
        }
        
}