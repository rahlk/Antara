#include<stdio.h>
#include<stdlib.h>
 void foregone(int t,int y)
 {
    long long int dig,k,n,r;
         n=t;
         dig=0;
         k=2;
         while(n>0)
         {
             r=n%10;
             if(r==4)
             {
                 
            dig=dig+k;
             }
             n=n/10;
             k=k*10;
         }
   
    printf("Case #%d: %lld %lld\n",y,(t-dig),dig);
 }
int main()
{
    int T;
    scanf("%d",&T);
    long long test;
    for(int i=0;i<T;i++)
    {
        scanf("%lld",&test);
        foregone(test,i+1);
    }
    return 0;
    
}