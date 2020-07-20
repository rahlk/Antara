#include<stdio.h>
int checkforfour(long int a){
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
    long int n=0,b=0;
    scanf("%d",t);
    while(t--){
        scanf("%ld",n);
        for(long int i=1;i<n;i++){
            b=n-i;
            if(checkforfour(i)==1 && checkforfour(b)==1){
                printf("Case #%d: %ld %ld",t,i,b);
            }
        }
    }
    return 0;
}