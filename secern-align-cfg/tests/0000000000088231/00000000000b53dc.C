#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int a,b,i,k,j,c,l,rem,p=0;
int d[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        rem=b%10;
        if(rem==4)
            d[p++]=1;
        else
            d[p++]=rem;
        b=b/10;
    
    }
   int m[p];
    for(j=p-1,k=0;j>=0;j--,k++)
        m[k]=d[j];
    sscanf(m,"%d",&c);
    l=a-c;
    printf("%d %d",c,l);
    p=0;k=0;
}
}