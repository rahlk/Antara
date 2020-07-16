#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,a,b,t,i,i1,n1,n2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        a=0;i1=0;
        scanf("%d",&n);
        n2=n;
      while(n!=0)
      {
          i1++;
          n1=n%10;
          if(n1==4)
          {
           a=a+2*pow(10,i1-1);
          }
          n=n/10;
      }
      printf("Case #%d: %d %d",i,n2-a,a);
    }
return 0;
}