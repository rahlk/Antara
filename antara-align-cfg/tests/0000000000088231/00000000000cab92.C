#include<stdio.h>
#include<math.h>
int main()
{
    int n[100],a,b,t,i,i1,n1,n2,n3;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<=t;i++)
    {
        a=0;i1=0;
        n2=n[i];
        n3=n[i];
      while(n3!=0)
      {
          i1++;
          n1=n3%10;
          if(n1==4)
          {
           a=a+2*pow(10,i1-1);
          }
          n3=n3/10;
      }
      printf("Case #%d: %d %d\n",i,n2-a,a);
    }
return 0;
}