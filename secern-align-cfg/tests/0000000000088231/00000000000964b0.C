#include<stdio.h>
int callDiv(int n,int t)
{
    int a,b,temp;
    temp = n;
    int flag=0;
    for(int i=2;i<=(n/2) && flag==0;i++)
      {
          if(n%i==0)
          {
              a=(n/i);
              b=i;
              flag=1;
          }
      }
     if(flag==1)
     printf("Case #%d: %d %d",t,a,b);
    return 1;  
}      
      
int main()
{
    int n;
    scanf("&d",&n);
    for(int i=1;i<=n;i++)
    {
     callDiv(n,i);
    }
    return 0;
}
