#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int e[],int f[],int len,int k)
{
    int max1,max2,i,x;
    max1=e[0];
    max2=f[0];
    for(i=0;i<len;i++)
    {
        max1=max1>e[i]?max1:e[i];
        max2=max2>f[i]?max2:f[i];
    }
    x=abs(max1-max2);
    if(x<=k)
        return 1;
    else
        return 0;
}

int main()
{
    int t,p=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,x,sum=0;
        scanf("%d %d",&n,&k);
        int c[n],d[n],i,j,len,l,e[n],f[n];
        for(i=0;i<n;i++)
            scanf("%d",&c[i]);
        for(i=0;i<n;i++)
            scanf("%d",&d[i]);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                len = 0;
                for(l=i;l<=j;l++)
                {
                    e[len] = c[l];
                    f[len] = d[l];
                    len++;
                }
            x = fun(e,f,len,k);
            sum = sum + x;
            }
        }
        printf("Case #%d: %d\n",p,sum);
        p++;
    }
}
