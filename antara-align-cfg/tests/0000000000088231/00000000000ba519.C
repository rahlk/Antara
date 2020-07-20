#include<stdio.h>

int main()
{
 long long int p,d,v,s,temp=0,c=0,n,r,f,t;
 scanf("%lld",&t);
 while(t--)
 {
  scanf("%lld",&n);
  temp=n;
  v=n;
 while(n>0)
 {
 r=n%10;
 c++;
 if(c==1)
    f=1;
    else
        f=f*10;
 if(r==4)
 {
    temp=temp-f;
 }
 n=n/10;
 }

 d=v-temp;
 printf("%lld %lld\n",d,temp);
c=0;
temp=0;
d=0;
 }

}


