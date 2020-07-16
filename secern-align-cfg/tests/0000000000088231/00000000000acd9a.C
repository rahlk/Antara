#include<stdio.h>

int main() {
   long long int t;
    scanf("%lld",&t);
    for( long long int i=1;i<=t;i++)
    {
  long long int n,a,b;
 scanf("%lld",&n);
 a=n;
  long long int m=a;
  long long int k,flag=0;
 while(a!=0){
     a=a/10;
     k=a;
     if(k==4)
     flag=1;
     
 }
 k=0;
 if(flag==1)
 { m=0;
     a=n/2;
   
     while(a!=0){
     a=a/10;
     k=a;
     if(k==4)
     m=1;
     }
     if(m!=1)
 { if(n%2!=0)
 printf("Case #%d: %lld %lld\n",i,n/2,n/2+1);
 else
 printf("Case #%d: %lld %d\n",i,n/2,n/2);
 }
   
     
 }
   
 
 if(flag!=1)
 {
 printf("Case #%lld: %lld %lld\n",i,1,n-1);
 
 }

    }
}

