#include<stdio.h>
int main()
{
    long int t,n,i,a,b,c,d,f=1;
    scanf("%ld",&t);
    while(t--)
  {
      c=1;d=1;
    scanf("%ld",&n);
    a=n;b=0;
    for(;n!=0;n/=10)
    {
        if(n%10==4)
        {
            a-=c;
            b+=d;
        }
        c=c*10;
        d=d*10;
    }
    printf("Case #%ld: %ld %ld\n",f,a,b);
    f++;
  }
}