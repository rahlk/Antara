#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    int n,k;
    int i,j,w;
    int cases=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d" ,&n,&k);
        int a1[n],a2[n];
        int p=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a1[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&a2[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                int m1=0,m2=0;
                for(w=i;w<=j;w++)
                {
                    if(a1[w]>m1)m1=a1[w];
                    if(a2[w]>m2)m2=a2[w];
                }
                if(abs(m1-m2)<=k)p++;
            }
        }
        printf("Case #%d: %d\n",++cases,p);
    }
    return 0;
}