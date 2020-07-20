#include<stdio.h>
#include<malloc.h>
int main()
{
int k,t,c,j,num1;
scanf("%d",&k);
int *x=(int*)malloc(sizeof(int)*k);
for(int i=0;i<k;i++)
scanf("%d",&x[i]);
for(int i=0;i<k;i++)
{
c=0;
t=2;
for(num1=j=x[i];j>0;j/=10,c++)
{
if(j%10==4)
{
for(;c;c--)t*=10;
num1-=t;
}
}
printf("Case #%d: %d %d\n",i+1,num1,x[i]-num1);
}
return 0;
}