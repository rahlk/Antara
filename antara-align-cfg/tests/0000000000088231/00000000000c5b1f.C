#include<stdio.h>
int main()
{
  long t=0,n=0,a=0,b=0,diff=0,count=1,j=0,c=0,diff1=0,d=0;
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
          {
            count=0;
            break;
          }    
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
               break;
           }
           c=c*10;
           diff1=diff1/10;
       }
       }
      }
      printf("Case #%d: %d %d \n",i+1,a,diff);

  }

  return 0;

}