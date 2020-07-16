#include <stdio.h>

int main(void) {
        int t,i,j,m=1;
        scanf("%d",&t);
        while(t--)
        {
            int r,c;
            scanf("%d%d",&r,&c);
            if (c>=5)
            {
                printf("Case #%d: POSSIBLE\n",m++);
                for(i=1;i<=r;i++)
                {
                    for(j=1;j<=c;j+=2)
                    {
                        printf("%d %d\n",i,j);
                    }
                }
                for(i=1;i<=r;i++)
                {
                    for(j=2;j<=c;j+=2)
                    {
                        printf("%d %d\n",i,j);
                    }
                }
                
            }
            if(r>=5)
            {
                printf("Case #%d: POSSIBLE\n",m++);
                for(i=1;i<=c;i++)
                {
                    for(j=1;j<=r;j+=2)
                    {
                        printf("%d %d\n",j,i);
                    }
                }
                for(i=1;i<=c;i++)
                {
                    for(j=2;j<=r;j+=2)
                    {
                        printf("%d %d\n",j,i);
                    }
                }
                
            }
            if(c>=4&&r>=3)
            {
                printf("Case #%d: POSSIBLE\n",m++);
                for(i=1;i<=r;i++)
                {
                    for(j=1;j<=c;j+=2)
                    {
                        printf("%d %d\n",i,j);
                    }
                }
                for(i=1;i<=r;i++)
                {
                    for(j=2;j<=c;j+=2)
                    {
                        printf("%d %d\n",i,j);
                    }
                }
                
            }
            if(r>=4&&c>=3)
            {
                printf("Case #%d: POSSIBLE\n",m++);
                for(i=1;i<=c;i++)
                {
                    for(j=1;j<=r;j+=2)
                    {
                        printf("%d %d\n",j,i);
                    }
                }
                for(i=1;i<=c;i++)
                {
                    for(j=2;j<=r;j+=2)
                    {
                        printf("%d %d\n",j,i);
                    }
                }
            }
            else
            printf("Case #%d: IMPOSSIBLE\n",m++);
            }
}
