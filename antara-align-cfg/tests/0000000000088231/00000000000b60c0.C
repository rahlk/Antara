#include<stdio.h>
void main()
{
  long t,n,a,b,diff,count=1,j=0,c=0,diff1=0,d;
  scanf("%d",&t);
  for(long i=0;i<t;i++)
  {
      scanf("%d",&n);
      a=n;
      count=1;
      j=0;
      while(count==1)
      {
       j++;
       d=a;
      while(a>0)
      {
          b=a%10;
          if(b==4)
            count=0;
          a=a/10;
      }
      if(count==0)
      {
          a=n-j;
          count=1;
      }
      else
      {
       count=0;
       a=d;
      }
        diff=j-1;
       if(count==0)
       {
       c=10;
       diff1=diff;
       while(diff1>0)
       {
           if(diff1%10==4)
           {
               diff=diff-(c/10);
               a=a+(c/10);
               count=1;
           }
           c=c*10;
           diff1=diff1/10;
       }
       }
      }
      printf("%d %d",a,diff);

  }

}