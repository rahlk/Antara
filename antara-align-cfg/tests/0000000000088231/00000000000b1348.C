#include<stdio.h>
#include<math.h>
void main(int n)
{
int i,T,n,n1,b=0,a,k=0;
scanf("%d",&T);
for(i=0;i<T;i++)
{scanf("%d",&n)
n1=n;
k=0;
b=0;
while(n1!=0)
{a=n1%10;
k++;
n1=n1/10;
if(a==4) b=((2*pow(10,k-1))+b;
}
a=n-b;
printf("Case #%d :%d %d", i+1,a,b);
}
}