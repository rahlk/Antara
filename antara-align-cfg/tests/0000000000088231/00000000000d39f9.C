#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int t,i,n[100];
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n[i]);
    }
    for(i=0;i<t;i++){
        long long int s,a,x=0,d=1;
        s=n[i];
        if((n[i]/10)==0){
            printf("Case #%lld: 2 2\n",i+1);
            continue;
        }
        while((n[i]/10)!=0){
            a=(n[i]%10);
            if(a==4){
                x=3*d+x;
            }
            else{
                x=a*d+x;
            }
            n[i]=n[i]/10;
            d=d*10;
        }
        if (n[i]==4){
            x=3*d+x;
        }
        else{
            x=n[i]*d+x;
        }
        s=s-x;
        printf("Case #%lld: %lld %lld\n",i+1,x,s);
    }
}