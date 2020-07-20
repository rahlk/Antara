#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,i,j,k=1;
        scanf("%d",&a);
        for(i=1;i<a;i++)
        {
            for(j=1;j<a;j++)
            {
                if(i+j==a&&fun(i,j))
                {
                    printf("Case #%d: %d %d",k,i,j);
                    k++;
                }
            }
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
        a=b/10;
    }
    if(c==1)
    return 0;
    else
    return 1; 
}