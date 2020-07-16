#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int k,t,i,f,n,c[100000],d[100000],l,r,count,x,y;
    scanf("%lld",&t);
    for(f=1;f<=t;f++)
    {
        count=0;
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
        {
             scanf("%lld",&c[i]);
        }
        for(i=0;i<n;i++)
        {
             scanf("%lld",&d[i]);
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
        printf("Case #%lld: %lld\n",f,count);
    }
    return 0;
}
int max(long long int start,long long int end,long long int a[])
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