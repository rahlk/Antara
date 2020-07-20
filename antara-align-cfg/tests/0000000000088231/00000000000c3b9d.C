#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int number=0,count,n,digit,reverse=0;
     scanf("%d",&n);
     count=n;
     while(count>0)
     {
         digit=count%10;
         count=count/10;
         if(digit==4)
            digit--;
         number=(number*10)+digit;
     }
      while (number != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + number%10;
      number       = number/10;
   }
     printf("%d %d\n",reverse,n-reverse);
    }
    return 0;
}
