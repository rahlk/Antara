#include<stdio.h>
void main()
{
    int i,j,n,t,a[100];
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            if(n%i==0)
            {
                printf("%d",i);
            }
        }
    }
}