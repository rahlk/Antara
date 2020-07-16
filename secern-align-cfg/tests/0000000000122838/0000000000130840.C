#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    for(int z=0;z<t;z++)
    {int n,k,m1,m2,diff,c=0;
        scanf("%d%d",&n,&k);
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {m1=a[i];
            m2=b[i];
                for(int x=i;x<=j;x++)
                {
                   if(a[x]>m1)
                    m1=a[x];
                }
                for(int x=i;x<=j;x++)
                {
                    if(b[x]>m2)
                    m2=b[x];
                }
                
                diff=m1-m2;
                diff=abs(diff);
                if(diff<=k)
                c++;
                
            }
        }
        printf("Case #%d: %d",z,c)
    }
    
    
    
}
