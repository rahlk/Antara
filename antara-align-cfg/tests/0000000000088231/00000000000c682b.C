#include<stdio.h>
void main()
{
    int t,n,i,j;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((i+j)==n && i!=4 && j!=4){
                printf("%d %d",i,j);}
            }
        }
    }
}