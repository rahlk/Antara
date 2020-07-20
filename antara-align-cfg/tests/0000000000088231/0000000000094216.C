#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main (void){
    int t;
    scanf("%d",&t);
    for(int c= 1; c<=t; c++)
    {
         int n,count=2,d=0,b=0;
         int flag;
        scanf("%d",&n);
        for( int i=1;i<=n;i++){
             int a;
            a=n % count;
        if(a==0){
            flag=0;
            b=n/count;
          for(  int j=1;j;j=j*10){
              if(((b % j)/(j/10))==4){
                  flag=1;
                  break;
              }
              if (b<j)break;
          }
          if(flag == 0){
               d=n-b;
              for( int k=1;k;k=k*10){
              if(((d % k)/(k/10))==4){
                  flag=1;
                  break;
              }
              if (d<k)break;
          }
        }
         }
         if ((flag==0) && (b+d==n)) {
            break;}
         count++;
    }
    printf("Case #%d: %d %d\n",c,b,d);
}
}