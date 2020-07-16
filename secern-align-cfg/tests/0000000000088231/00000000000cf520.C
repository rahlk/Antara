#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
      int n,a,b,temp1,temp;
      scanf("%d",&n);
      a=n;
      b=0;
      temp1=1;
      while(n>0)
      {
        temp=n%10;
        n=n/10;
        if(temp==4)
          {
            a=a-temp1;
            b=b+temp1;
          }
          temp1=temp1*10;
      }
    printf("%d,%d\n",a,b);
    t--;
    }
    return 0;
}
