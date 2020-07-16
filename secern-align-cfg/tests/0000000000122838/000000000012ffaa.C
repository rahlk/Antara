#include<stdio.h>
void main()
{
    int t,n,k,c[1000],d[1000],i,count=0,op=0,j,m1,m2;
    scanf("%d",&t);
    while(t--)
    {
        m1=0;
        m2=0;
        scanf("%d %d",&n,&k);
        count=count+1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&c[i]);
            if(m1<c[i])
            {
                m1=c[i];
            }
        }
        for(j=0;j<n;j++)
        {
            scanf("%d",&d[i]);
            if(m2<d[i])
            {
                m2=d[i];
            }
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((c[i]!=d[j])&&(c[i]!=0&&d[j]!=0))        
            {
                op=0;
            }
            if(c[i]-d[i]<=k)
            {
                op=op+1;
            }
            
        }
    }
    printf("Case #%d: %d\n",count,op);
    }
}