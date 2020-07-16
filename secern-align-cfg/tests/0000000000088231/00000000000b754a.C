#include<stdio.h>
void main()
{
  long long n,c,m,count;
  int r,t;
  scanf("%d",&t);
  t=1;
  while(t--)
  {
    count=0;
    scanf("%lld",&n);
    c=n,m=1;
    while(n>0)
    {
      r = n%10,n=n/10;
      if(r==4)
        count = count + m;
      m*=10;
    }
    printf("%lld %lld",count,c-count);
  }
}