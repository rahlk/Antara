#include <stdio.h>
#include <math.h>

int positionOfFour(int n)
{
    int a=0;
    int b=0;
    while(n>0)
    {
        printf("n: %d\n",n);
        if(n%10 == 4)
        {
            a+=(int)(pow(10, b) + 0.5);
        }
        n/=10;
        b++;
    }
    return a;
}

int main()
{
   int T,N;
   int a,b;
   int i;

   printf("Enter T: ");
   scanf("%d",&T);
   for(i=0;i<T;i++)
   {
       printf("Case #%d: Enter N => ",i);
       scanf("%d",&N);
       a= positionOfFour(N);
       b = N-a;
       printf("Case #%d: %d %d \n\n",i,a,b);
   }
   return 0;
}
