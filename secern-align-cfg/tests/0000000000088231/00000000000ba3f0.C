#include<stdio.h>
#include<math.h>
int main()
{
int n,r,q,i=0,b=0,m,a;
scanf("%d",&n);
m=n;
while(n!=0)
{
i++;
r=n%10;
q=n/10;
if(r==4)
{
b+=1*pow(10,(i-1));
q-=1;
}
n=q;
}
a=m-b;
printf("%d %d",a,b);
return 0;
}

