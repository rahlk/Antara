#include<stdio.h>
int main()
{
    int long long t,n,i,j,k,l,a,b,sum;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        k=n;
        i=0;
        sum=0;
        while(k>0){
            l=k%10;
            if(l==4){
               sum=sum+pow(10,i); 
            }
            i++;
            k=k/10;
            
        }
        printf("%lld %lld\n",n-sum,sum);
    
    }
    
}