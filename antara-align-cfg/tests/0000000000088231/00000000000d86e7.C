#include<stdio.h>
int checkfour(int m)
{
    int rem=0,count=0;
    while(m!=0)
    {
        rem=m%10;
        if(rem==4)
        count++;
        m=m/10;
    }
    if(count>0)
    return 1;
    else
    return 0;
}
int main()
{
  int t,n,a=1,b=0;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&n);
       b=n-a;
      while(a<=n/2)
      
      {
      if(checkfour(a)==0&&checkfour(b)==0)
      { printf("%d %d\n",a,b);
      break;
      }
      else
      {
          a++;b--;
      }
      }
  }
return 0;
}