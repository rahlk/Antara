#include<stdio.h>
int main()
{
    int T,R[100],C[100];
    int r[100],c[100],i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&R[i],&C[i]);
    }
    for(i=0;i<T;i++)
    {
         r[i]=1;
            c[i]=1;
           
         printf("Case #1: ");
            if(r[i]!=R[i] && c[i]!= C[i] && (R[i]-C[i])!==(r[i]-c[i]))
            {
              printf("IMPOSSIBLE");
              for(j=0;j<R[i]*C[i];j++)
            {
           
            if(r[i]!=R[i] && c[i]!= C[i] && (R[i]-C[i])!==(r[i]-c[i]))
            {
                printf("%d ",r[i],c[i]);
                
            }
        }
              
            }
            else
            printf("POSSIBLE");
        
    }
}