#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int k=0;
    while(n--)
    {
        int a,i,j,x=0;
        scanf("%d",&a);
        for(i=1;i<a;i++)
        {
            for(j=1;j<a;j++)
            {
                x=0;
                if(i+j==a&&fun(i,j))
                {
                    k++;
                    printf("Case #%d: %d %d\n",k,i,j);
                    x=1;
                    break;
                }
            }
            if(x==1)
            break;
        }
    }
}
int fun(int i,int j)
{
    int a=i,b=j,c=0,d;
    while(a>0)
    {
        d=a%10;
        if(d==4)
        c=1;
        a=a/10;
    }
    while(b>0)
    {
        d=b%10;
        if(d==4)
        c=1;
        b=b/10;
    }
    if(c==1)
    return 0;
    else
    return 1; 
}