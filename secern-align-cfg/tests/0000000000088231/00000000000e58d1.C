#include<stdio.h>
void main()
{
int i,n,t,n1,d,f=0,n2,d1,nn=0,nnn,g=1;
printf("Enter the number of test cases");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
printf("Enter the number");
scanf("%d",&n);
n1=n;
n2=n;
while(n1>0)
{
d=n1%10;
if(d==4)
f++;
n1=n1/10;
}
if(f==0)
printf(" ");
else
{
while(n2>0)
{
    d=n2%10;
    if(d==3)
    d1=d+2;
    else if(d==9)
    d1=d-1;
    else
    d1=d+1;
    nn=nn*10+d1;
    n2=n2/10;
}
if(nn>n)
nnn=nn-n;
else
nnn=n-nn;
printf("case %d: %d %d",g,nn,nnn);
g++;
}
}
}
