#include<stdio.h>
#include<stdlib.h>
void main()
{
int t,n,a,b;
scanf("%d",&t);
scanf("%d",&n);
int i,j;
/*
for(i=1,j=2;i<n,j<n;i++,j++)
    {
        a=i;
        b=j;
        if((a!=4 && b!=4) && (a+b)==n)
        printf("%d %d",a,b);
    }*/
for(i=1;i<n;i++)
{
    a=i;
    if(a!=4)
    {
        for(j=1;j<n;j++)
        {
            b=j;
            if(b!=4)
            {
                if((a+b)==n)
                {
                    printf("%d %d",a,b);
                    exit(0);
                }
            }
        }    
    }
    
}
    
}