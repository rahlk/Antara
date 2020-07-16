#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
int a,b,i,k,j,c=0,l,rem,p=0;
int d[9000000];
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
    char buff[p];
   for(j=p-1,k=0;j>=0;k++,j--)
        m[k]=d[j];
   for (j=0; j<p; j++) 
        sprintf(&buff[j],"%d",m[j]);
    c=atoi(buff);
    l=a-c;
   printf("%d %d",c,l);
    p=0;k=0;
}
}