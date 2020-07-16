#include<stdio.h>
int main()
{
    int t,n,n1,count,c,num,fn;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        n1=n;
        fn=n;
        count=0;
        while(n1>0)
        {
          if(n1%10==4)
          {
          if(n==n1)
           n=n-1;
          else
           {
            c=count;
            num=1;
            while(c--)
             num=num*10;
           n=n-num;
           }
          }
          n1=n1/10;
          count++;
        }
        printf("%d %d",n,fn-n);
    }
    return 0;
}