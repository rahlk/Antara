#include<stdio.h>
int main()
{
    int t,n,a,b,num,s=0,d;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        a=0;
        b=0;
        scanf("%d",&n);
        if(n>9)
        {
        num=n;
        int c=0;
        while(num!=0)
        {   
            d=num%10;
            s=s+10*c;
            if(d==4)
                break;
            else
                ++c;
        }
        a=s;
        b=n-a;
        }
        else
        {
            a=2;
            b=2;
        }
        printf("Case #%d: %d %d",i,a,b);
        
    }
return 0;
}