#include <stdio.h>
#include <math.h>

int main()
{
    int T,r=1;
    scanf("%d",&T);
    while(T--){
    int n,k;
    scanf("%d %d",&n,&k);
    int i,c[100000],d[100000],j,l,sum=0;
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0 && j>=i;j--)
        {
            int max1=c[j],max2=d[j];
            for(l=i;l<=j;l++)
            {
                if(c[l]>max1)
                    max1=c[l];
                if(d[l]>max2)
                    max2=d[l];
            }
            if(abs(max1-max2)<=k)
                sum++;
        }
    }
    printf("Case #%d: %d\n",r,sum);
    r++;
    }
    return 0;
}
