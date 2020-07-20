#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main (void){
    int t;
    scanf("%d",&t);
    for(int c=1; c<=t; c++)
    {
         long long int n,count=2,d=0,b=0;
         int flag;
        scanf("%lld",&n);
        for( long long int i=1;i<=n;i++){
             int a;
            a=n%count;
        if(a==0){
            flag=0;
            b=n/count;
          for(long long int j=10;j;j=j*10){
              if(((b%j)/(j/10))==4){
                  flag=1;
                  break;
              }
              if(b<j)break;
          }
          if(flag==0){
               d=n-b;
              for(long long int k=10;k;k=k*10){
              if(((d%k)/(k/10))==4){
                  flag=1;
                  break;
              }
              if(d<k)break;
          }
        }
         }
         if ((flag==0)&&((b+d)==n)) {
            break;}
         count++;
    }
    printf("Case #%d: %lld %lld\n",c,b,d);
}
return 0;
}