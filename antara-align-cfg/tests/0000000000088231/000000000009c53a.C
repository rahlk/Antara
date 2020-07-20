#include<stdio.h>
int main()
{
int testcases,number,i,y1,y2,n1,n2,found=0;
scanf("%d",&testcases);
for(int p=1;p<=testcases;p++)
{
scanf("%d",&number);
for(i=1;i<number;i++)
{
found=0;
n1=number-i;
n2=i;
y1=n1;
y2=n2;
while(y1>0)
{
if(y1%10==4)
{
found=1;
break;
}
y1=y1/10;
}
while(y2>0 && found!=1)
{
if(y2%10==4)
{
found=1;
break;
}
y2=y2/10;
}
if(found==0) break;
}
printf("case #%d : %d %d\n",p,n1,n2);
}
return 0;
}