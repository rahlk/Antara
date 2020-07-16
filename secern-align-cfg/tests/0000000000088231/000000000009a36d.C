#include<stdio.h>
int check(int n)
{
  while(n)
  {
    if(n%10 == 4)
    return 1;
    n/=10;
  }
  return 0;
}
int main()
{
    int t,n,i,j,a,b,c,k,p=0;
    scanf("%d",&t);
    while(t--)
    {
        b=0;
        scanf("%d",&n);
        c=n;k=1;
        while(c)
        {
            i=c%10;
            c/=10;
            if(i==4)
            {
              k+=1;
               do{
                 k-=1;
                 b+=k;
                a=n-b;
               }while(check(b) && check (a));
            }
            k*=10;
        }
        printf("\ncase #%d: %d %d ",++p,a,b);
    }
}