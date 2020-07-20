#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int t,n,a,b;
scanf("%d",&t);
scanf("%d",&n);
int i,j;
while(t--)
{
for(i=n-1;i>=1;i--)
{
    if(i!=4)
    {
        a=i;
    for(j=1;j<n;j++)
    {
        if(j!=4)
        {
            b=j;
            if((a+b)==n)
                {
                    printf("case #%d: %d %d",t,a,b);
                    exit(0);
                }
        }
    }   
    }
}
}   
}