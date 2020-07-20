#include<stdio.h>
int main()
{
    int t,n,a,b;
    t=n=a=b=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        int i=0,j=0;
        for(i=1;i<n;i++)
        {
            for(j=n-1;j>=1;j--)
            {
                if((i+j)==n)
                {
                    printf("%d %d",i,j);
                }
            }
        }
        t--;
    }
}