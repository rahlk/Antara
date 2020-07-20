#include<stdio.h>

int main()
{
    int t,v=1;
    scanf("%d",&t);
    while(t--)
    {
        
        int n,m;
        scanf("%d%d",&n,&m);
        int minx[n],maxx[n],miny[n],maxy[n],i;
        for(i=0;i<n;i++)
        {
            int a,b;
            char c;
            scanf("%d%d",&a,&b);
            scanf(" %c",&c);
            if(c=='N')
            {
                miny[i]=b+1;
                maxy[i]=m;
                minx[i]=0;
                maxx[i]=m;
            }
            if(c=='S')
            {
                miny[i]=0;
                maxy[i]=b-1;
                minx[i]=0;
                maxx[i]=m;
            }
            if(c=='W')
            {
                miny[i]=0;
                maxy[i]=m;
                minx[i]=0;
                maxx[i]=a-1;
            }
            if(c=='E')
            {
                miny[i]=0;
                maxy[i]=m;
                minx[i]=a+1;
                maxx[i]=m;
            }
            
        }
        int xe,xy,j,max=0;
        for(i=0;i<=m;i++)
        {
            int count=0;
        for(j=0;j<n;j++)
        {
            if(i>=minx[j]&&i<=maxx[j])
            count++;
            
        }
        if(count>max)
        {
        xe=i;
        max=count;
        }
        }
        max=0;
        for(i=0;i<=m;i++)
        {
            int count=0;
        for(j=0;j<n;j++)
        {
            if(i>=miny[j]&&i<=maxy[j])
            count++;
            
        }
        if(count>max)
        {
        xy=i;
        max=count;
        }
        }
        printf("Case #%d: %d %d\n",v,xe,xy);
        v++;
        
    }
    return 0;
}