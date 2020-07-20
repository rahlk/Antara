#include <stdio.h>

int main()
{
    int t,n,i,a,b,s,d;
    i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=n;
        b=0;
        s=1;
        
        while(n>0)
        {
            d=n%10;
            
            if(d==4)
            {
               a-=s;
               b+=s;
            }
            s=s*10;
            n=n/10;
        }
        
        printf("Case #%d: %d %d\n",i,a,b);
        i++;   
    }
}
