#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int t1=1;t1<=t;t1++)
    {
        int n,r=0,s=0,p=0;
        scanf("%d",&n);
        char a[n][255];
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
            if(a[i][0]=='R')
                r=1;
            else if(a[i][0]=='P')
                p=1;
            else
                s=1;
        }
        if(r+p+s==3)
        printf("Case #%d: IMPOSSIBLE\n",t1);
        else if(r+p+s==1)
        {
            if(r==1)
            printf("Case #%d: P\n",t1);
            else if(p==1)
            printf("Case #%d: S\n",t1);
            else
            printf("Case #%d: R\n",t1);
        }
        else
        {
            printf("yet to solve");
        }
    }
}