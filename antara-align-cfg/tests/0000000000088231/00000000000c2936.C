#include<stdio.h>
int main(void){
    int t;
    scanf("%d",&t);
    int i=1;
    while(t--){
        long long n,n1,n2,s=0;
        scanf("%lld",&n);
        int t1;
        n1=n;
        n2=10;
        while(n){
            t1=n%10;
            if(t1==4){
                n1-=2*n2;   
            }
            else
                s+=2*n2;
            n2=n2*10;
            n=n/10;
        }
        printf("Case #%d: %lld %lld\n",i,n1,s);
        i++;
    }
    return 0;
}