#include<stdio.h>
int check(int a)
{
    while(a>0)
    {
        int k=a%10;
        if(a==4)
        {
            return 0;
        }
        a=a/10;
    }
    return 1;
}
void set(int N,int t)
{
    for(int i=1;i<=N-1;i++)
    {
        for(int j=N-1;j>=1;j--)
        {
            if((i+j)==N)
            {
                if(check(i)==1)
                {
                    if(check(j)==1)
                    {
                        printf("Case #%d: %d %d \n",t,i,j);
                        return;
                    }
                }
            }
        }
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int T=0;T<n;T++)
    {
        int j=ar[T];
        set(j,T+1);
    }
}
