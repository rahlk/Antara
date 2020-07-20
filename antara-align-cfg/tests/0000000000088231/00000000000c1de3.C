#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int check_digit(int x)
{
    while (x > 0)
    {
        if (x % 10 == 4)
            break;

        x = x / 10;
    }

     if(x > 0)
        return 0;
        else
            return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i=0,n=0,check=0,flag=0;
        scanf("%d",&n);
        for(i=n-1;i>=n/2;i--)
        {
          if(check_digit(i) && check_digit(n-i))
          {
                printf("%d %d\n",i,n-i);
                break;
          }
        }
    }
    return 0;
}
