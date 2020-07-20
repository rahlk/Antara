#include<stdio.h>
int ifcontains(int);
int iffour(int);
int main()
{
    int t;
    scanf("%d",&t);
    int count=0;
    while(t--)
    {
        count=count+1;
        int n,i;
        scanf("%d",&n);
        if(ifcontains(n))
        {
            printf("Case #%d: %d %d\n",count,n/2,n/2);
        }
        else
        {
            for(i=n-1;i>0;)
            {
                if(iffour(i)==1&&iffour(n-i)==1)
                {
                    printf("Case #%d: %d %d\n",count,i,n-i);
                    break;
                }
                    i--;
            }
        }
    }
}
int ifcontains(int x)
{
    int i,temp=0,r;
    i=x;
    while(i>0)
    {
        r=i%10;
        if(r<8)
        {
            i=i/10;
            temp=0;
        }
        else
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    {
        return 0;
    }
    else
    {
    return 1;
    }
}
int iffour(int x)
{
    int i,r,temp=0;
    i=x;
    while(i>0)
    {
        r=i%10;
        if(r!=4)
        {
            i=i/10;
            temp=0;
        }
        else
        {
            temp=1;
            break;
        }
    }
     if(temp==1)
    {
        return 0;
    }
    else
    {
    return 1;
    }
}