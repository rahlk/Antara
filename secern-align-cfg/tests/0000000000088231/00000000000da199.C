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
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
      int a=1,b=0;
      scanf("%d",&n);
       b=n-a;
       int flag=0;
      while(a<=n/2&&flag==0)
      
      {
      if(checkfour(a)==0&&checkfour(b)==0)
      { printf("%d %d\n",a,b);
      flag=1;
      }
      else
      {
          a++;b--;
      }
      }
  }
return 0;
}