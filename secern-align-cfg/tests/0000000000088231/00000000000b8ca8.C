#include<stdio.h>
int  main()
{
    int t,n,c=0;
    scanf("%d",&t);
    int i,z,p,b;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int a[n];
        int j;
        for(j=0;j<n-1;j++)
        {
            a[j]=j+1;
        }
        z=0;
        j=n-2;
        while(z<=j)
        {
            int x=a[z];
            int y=a[j];
            while(x>0)
            {
               p=x%10;
               x=x/10;
               if(p==4)
               {
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
                   c++;
                   break;
               }
             }
            if(c==0)
            {
              printf("Case #%d: %d %d\n",i,a[z],a[j]);
              break;
            }
            else
            {
              z++;
              j--;
              c=0;
            }
          }
    }
}
