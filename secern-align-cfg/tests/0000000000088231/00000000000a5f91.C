#include<stdio.h>
long long int replace(long long int n){
    long long int num=0;
    int i;
    while(n>0){
        i=n%10;
        if(i==4){
            i=3;
        }
        num=num*10+i;
        n/=10;
    }
    n=0;
    while(num>0){
        i=num%10;
        n=n*10+i;
        num/=10;
    }
    return n;
}
int main(){
    int t,x=1;
    long long int n,num,rem;
    for(scanf("%d",&t);t!=0;t--,x++){
        scanf("%lld",&n);
       num=replace(n);
       rem=n-num;
       printf("Case #%d: %lld %lld\n",x,num,rem);
    }
    return 0;
}