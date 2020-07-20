#include <stdio.h>

int main()
{
    int temp,n,k,x,y,w,d;
    k=1;
    scanf("%d",&temp);
    while(temp--)
    {
        scanf("%d",&n);
        x=n;
        y=0;
        w=1;
        
        while(n>0)
        {
            d=n%10;
            
            if(d==4)
            {
               x-=w;
               y+=w;
            }
            w=w*10;
            n=n/10;
        }
        
        printf("Case #%d: %d %d\n",k,x,y);
        k++;
    }
}
