#include<stdio.h>
int check(long long int num){
    int n;
    while(num!=0){
        n=num%10;
        num/=10;
        if(n==4)
            return 0;
    }
    return 1;
}
int main(){
    int t,x=1;
    long long int n,i,k;
    for(scanf("%d",&t);t!=0;t--,x++){
        scanf("%lld",&n);
        i=1;
        for(k=n-1;k>=i;k--,i++){
            if((k+i)==n&&check(k)&&check(i)){
                printf("Case #%d: %lld %lld\n",x,i,k);
                break;
            }
        }
    }
}