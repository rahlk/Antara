
#include<stdio.h>
int main()
{
int k,c=0,num1,t=2,j;
scanf("%d",&k);
int a[k];
for(int i=0;i<k;++i)
scanf("%d",&a[i]);
for(int i=0;i<k;++i)
{
c=0;t=2;for(num1=j=a[i];j>0;j/=10,c++)
{
if(j%10==4)
{
for(;c;c--)t*=10;
num1=num1-t;
}
}
printf(" case#%d: %d %d\n",i+1,num1,a[i]-num1);
}
return 0;
}
