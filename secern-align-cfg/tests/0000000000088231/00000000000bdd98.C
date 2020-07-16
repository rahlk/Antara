#include<stdio.h>
#include<math.h>
int checkFour(int a, int b)
{
    int c=a,d=b;
    while(c>0)
    {
        if(c%10==4)
        return(0);
        c/=10;
    }
    while(d>0)
    {
        if(d%10==4)
        return(0);
        d/=10;
    }
    return(1);
}
int main()
{
    int t,i=1;
    scanf("%d",&t);
    long long int  n,a,b;
    while(i<=t)
    {
        scanf("%Ld",&n);
        if(n%2==0)
        {
          a=n/2;
          b=n/2;
        }
        else
        {
            a=n/2;
            b=n/2+1;
        }
      while(1)
      {
        if(checkFour(a,b))
        {
            printf("Case ");
            printf("#%d: ",i);
            printf("%d %d\n",a,b);
            break;
        }
        else
         {
             a--;
             b++;
         }
      }
      i++;
    }
    return(0);
}