#include<stdio.h>
main()
{
    int t,i,arr[10],j,l;
    scanf("%d",&t);
    long long int n,p,q,r;
    for(i=0;i<t;i++)
    {
        q=0,j=0;
        scanf("%lld",&n);
        p=n;
        while(p!=0)
        {
            r=p%10;
            p=p/10;
            if(r==4)
            {
                r=r-1;
            }
            arr[j]=r;
            j++;
        }
        for(l=j-1;l>=0;l--)
        {
            q=q*10+arr[l];
        }
        printf("Case #%d: %lld %lld\n",i+1,q,n-q);
    }
}
