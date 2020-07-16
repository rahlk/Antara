#include <stdio.h>
void main()
{
    int n,i,j,m;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1,i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          m=i+j;
            if(m==4)||(i&&m!=4)
            printf("%d,%d",i,j);
        
        }
    }
}