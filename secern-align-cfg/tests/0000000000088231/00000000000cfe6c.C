#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      long int n,a,b,temp1,temp;
      scanf("%ld",&n);
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
    printf("Case #%d: %ld %ld\n",i,a,b);
    }
    return 0;
}
