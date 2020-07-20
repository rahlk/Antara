#include<stdio.h>
void main()
{
  long long n,c,m,count;
  int r,t,i;
  scanf("%d",&t);
  //t=1;
  for(i=0;i<=t;i++)
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
    printf("Case #%d: %lld %lld\n",i,count,c-count);
  }
}