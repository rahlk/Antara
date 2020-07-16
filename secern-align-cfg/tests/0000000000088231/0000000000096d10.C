#include<stdio.h>
void main()
{
    int t,x,i,c,d,f=1;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&x);
        for(i=1;i<x;i++)
        {
        	f=0;
            c=i;
            d=x-i;
            while(c!=0)
            {
                if(c%10==4)
                {
                    f=1;
                    break;
                }
                c/=10;
            }
            while(d!=0)
            {
                if(d%10==4)
                {
                    f=1;
                    break;
                }
                d/=10;
            }
            if(f==0)
                break;
        }
        printf("%d %d",i,x-i);
        t--;
    }
}