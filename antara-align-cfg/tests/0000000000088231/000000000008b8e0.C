#include<stdio.h>
  
int main()
{
  int t,test,a,n,b,pow,tmp;
  scanf("%d",&test);
  for(t=1;t<=test;++t)
  {
    scanf("%d",&n);
    tmp=n;
    a=0;
    b=0;
    pow=1;
    while(tmp)
    {
      if((tmp%10) == 4)
      {
        a = (pow*2)+a;
      }
      else
      {
        a = (pow*(tmp%10))+a;
      }
      pow *= 10;
      tmp=tmp/10;
    }
    b=n-a;
    printf("Case #%d: %d %d\n", t,a,b);
  }
  return 0;
}