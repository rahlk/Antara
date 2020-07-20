#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int T,N,var,i,y,x;
    scanf("%d",&T);
    int s=T;
    while(T--)
   {
       scanf("%d",&N);
        x=N;
        i=0;
        y=0;
        if(N%10==4)
        {
            y=1;
        }
        while(x>0)
        {
            var=x%10;
            if(var==4)
            {
                y=y+pow(10,i);
            }
            x=x/10;
            i++;
        }

        printf("Case #%d:  %d  %d\n",s-T,N-y,y);
   }
    return 0;
}
