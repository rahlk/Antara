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
    int k=0,l=0;
    while(i!='\0')
    {
        l=strlen(i);
        if(i[k]!=4)
            k++;
        if(k==l)
            a=i;
    }
    for(j=1;j<n;j++)
    {
        while(j!='\0')
        {
            int k=0;l=0;
            l=strlen(j);
            if(j[k]!=4)
            k++;
            if(l==k)
            b=j;
        }
        if((a+b)==n)
            {
                printf("%d %d",a,b);
                exit(0);
            }
    }    
}
}   
}