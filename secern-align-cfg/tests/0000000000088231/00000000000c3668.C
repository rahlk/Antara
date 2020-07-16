#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int number=0,count,n,digit;
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
     printf("%d %d\n",number,n-number);
    }
    return 0;
}
