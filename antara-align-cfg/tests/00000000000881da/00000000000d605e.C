#include<stdio.h>
int main()
{
    int t,i=1,n,p[20],a=1,E,S,temp=0,SE,EESSSESE;
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
            {
               /* if(p[a]==SE)
                {
                    printf("ES");
                }
                else if(p[a]==EESSSESE)
                {
                    printf("SEEESSES");
                }*/
            
                 printf("%c",p[a]);
                if (p[a]=E)
                {
                    temp=p[a];
                    p[a]=S;
                    printf("%c",p[a]);
                }
                else if (p[a]=S)
                {
                    temp=p[a];
                    p[a]=E;
                    printf("%c",p[a]);
                }
            }    
        }
    }
    printf("%c",p[a]);
    
}