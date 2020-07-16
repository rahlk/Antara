#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T,N,var,i,y,x;
    scanf("%d",&T);
    while(T--)
   {
       scanf("%d",&N);
        x=N;
        i=0;
        y=0;
        while(x>0)
        {
            var=x%10;
            x=x/10;
            if(var==4)
            {
                y+=pow(10,i);
            }
            i++;
        }
        printf("Case : %d %d",N-y,y);
   }
    return 0;
}
