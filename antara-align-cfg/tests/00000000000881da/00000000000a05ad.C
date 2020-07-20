#include<stdio.h>
int main()
{
    int t,i=1,n,p[20],a=1,E,S;
    printf("enter the no. of cases");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("enter the dimensions");
        scanf("%d",&n); 
        for(i=1;i<=n;i++)
        {
            p[a]=(2*n)-2;
            for(i=1;i<=p[a];i++)
            
                printf("%c",p[a]);
                /*if (p[a]=E)
                {
                    p[a]=S;
                    printf("%c",p[a]);
                }
                else if (p[a]=S)
                {
                    p[a]=E;
                    printf("%c",p[a]);
                }*/
                
        }
    }
    
}