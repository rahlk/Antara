#include <stdio.h>
#include<string.h>

int main()
{   int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int l,j,k=0;
        scanf("%d\n",&l);
        char a[1001];
        scanf("%s",a);
        int x=1,y=1,n=1,m=1;
        printf("Case #%d: ",i);
        for(j=0;j<strlen(a);j++)
        {   if(x==n&&m==y)
            {
                if(a[j]=='S')
                {printf("E");
                 n++;
                 y++;    
                }
                else if(a[j]=='E')
                {printf("S");
                 m++;
                 x++;        
                }
            }
            else
            {
                if(a[j]=='S')
                {
                    printf("E");
                    m++;
                    x++;
                }
                else if(a[j]=='E')
                {
                    printf("S");
                    n++;
                    y++;
                }
            }
        } 
        printf("\n");
        
    }
    return 0;
}
