#include<stdio.h>
int fun(int);
int main()
{
    int n,i,j,k,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c1=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            for(k=1;k<=a;k++)
            {
                if(fun(j)==1&&fun(k)==1&&(j+k)==a)
                {
                printf("Case #%d:%d %d\n",i,j,k);
                c1+=1;
                }
                if(c1>=1)
                break;
            }
                if(c1>=1)
                break;
        }
    }
    return 0;
}
int fun(int num)
{
    int c=0;
    while(num!=0)
    {
        if(num%10==4)
        c+=1;
        num/=10;
    }
    if(c>0)
    return 0;
    else 
    return 1;
}