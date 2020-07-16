#include<stdio.h>
int  main()
{
    int t,n,c=0;
    scanf("%d",&t);
    int i,p,b;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        int j;
        for(j=0;j<n-1;j++)
        {
            a[j]=j+1;
        }
        i=0;
        j=n-2;
        while(i<=j)
        {
            int x=a[i];
            int y=a[j];
            while(x>0)
            {
               p=x%10;
               x=x/10;
               if(p==4)
               {
                   i++;
                   j--;
                   c++;
                   break;
               }
            }
            while(y>0)
            {
               b=y%10;
               y=y/10;
               if(b==4)
               {
                   if(c==0)
                   {
                       i++;
                       j--;
                   }
                   break;
               }
            }
            printf("Case #%d: %d %d",t,a[i],a[j]);
            break;
        }
    }
}