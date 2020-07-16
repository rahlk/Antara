#include<stdio.h>
int hasFour(int n){
    int tmp;
    while(n){
        tmp = n%10;
        if(tmp==4) return 1;
        n/=10;
    }
    return 0;
}
int main(){
    int t,n;
    scanf("%d",&t);
    for(int j=1;j<=t;j++){
        scanf("%d",&n);
        for(int i=1;i<=n/2;i++){
            if(!hasFour(i)&&!hasFour(n-i)){
                printf("Case #%d: %d %d",j,i,n-i);
                break;
            }
        }
    }
}