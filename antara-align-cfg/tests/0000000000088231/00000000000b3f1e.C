#include<stdio.h>
int main()
{
    int  n,val=0,d;
    int i,a,b,x,y,t;
    long long v[1000];
    scanf("%d",&t);
    for(i=0;i<t;++i)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<t;++i)
    {
        n=i+1;
        a=v[i];
        x=1;
        y=0;
        val=v[i];
        while(val>0)
        {
            d=val%10;
            if(d==4)
            {
                a=a-(x*2);
                y=y+x*2;
            }
            val=val/10;
            x=x*10;
        }
        b=y;
        printf("Case #%d: %d %d\n",n,a,b);
    }
}
