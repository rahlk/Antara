#include<stdio.h>
int main()
{
        int t,i,p,j,r,s,max1,max2;
        scanf("%d",&t);
        for(p=1;p<=t;p++)
        {
                int n,k,count=0;
                scanf("%d %d",&n,&k);
                int c[n],d[n];
                for(i=0;i<n;i++)
                scanf("%d",&c[i]);
                for(i=0;i<n;i++)
                scanf("%d",&d[i]);
                for(i=0;i<n;i++)
                        for(j=0;j<n;j++)
                        {
                        max1=max2=0;
                        for(r=i;r<=j;r++)
                        {
                                if(max1<c[r])
                                max1=c[r];
                                if(max2<d[r])
                                max2=d[r];
                        }
                        for(r=i;r<=j;r++)
                        {for(s=i;s<=j;s++)
                        if(c[r]==max1 && d[s]==max2)
                        if(((c[r]-d[s]>=0) && (c[r]-d[s]<=k))||((d[s]-c[r]>=0) && (d[s]-c[r]<=k)))
                        break;
                        if(s<=j)
                        break;}
                        if(r<=j)
                        count++;}
                printf("Case #%d: %d\n",p,count);
        }
}

