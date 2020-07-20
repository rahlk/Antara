#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k,t,i,f,n,c[100000],d[100000],l,r,count,x,y;
    scanf("%d",&t);
    for(f=1;f<=t;f++)
    {
        count=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
             scanf("%d",&c[i]);
        }
        for(i=0;i<n;i++)
        {
             scanf("%d",&d[i]);
        }
        for(l=0;l<n;l++)
        {
           for(r=l;r<n;r++)
           {
               x=max(l,r,c);
               y=max(l,r,d);
               if(abs(x-y)<=k)
               {
                   count++;
               }
           }
        }
        printf("Case #%d: %d\n",f,count);
    }
    return 0;
}
int max(int start,int end,int a[])
{
    int i,m;
    m=a[start];
    for(i=start+1;i<=end;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    return m;
}