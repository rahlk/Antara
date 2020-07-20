#include<stdio.h>
int main()
{
int testcases;
long number,i,y1,y2,n1,n2,found=0,s;
scanf("%d",&testcases);
for(int p=1;p<=testcases;p++)
{
scanf("%d",&number);
for(i=number/2;i<number;i=i+s)
{
found=0;
n1=number-i;
n2=i;
y1=n1;
y2=n2;
s=1;
while(y1>0)
{
if(y1%10==4)
{
found=1;
break;
}
s=s*10;
y1=y1/10;
}
s=1;
while(y2>0 && found!=1)
{
if(y2%10==4)
{
found=1;
break;
}
s=s*10;
y2=y2/10;
}
if(found==0) break;
}
printf("Case #%d: %ld %ld\n",p,n1,n2);
}
return 0;
}