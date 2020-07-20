#include<stdio.h>
int checkforfour(int a){
    while(a>0){
        if(a%10 == 4){
            return 0;
        }
            a=a/10;
    }
    return 1;
}
int main(){
    int t=0;
    long long int n=0;
    scanf("%d",t);
    while(t--){
        scanf("%lld",n);
        for(int i=1;i<n;i++){
            if(checkforfour(i)==1 && checkforfour(n-i)==1){
                printf("case #%d: %lld %lld",i,n-i);
                break;
            }
        }
    }
    return 0;
}