#include<stdio.h>
int main()
{
int testcases;
scanf("%d",&testcases);
for(int p=1;p<=testcases;p++)
{
long number,a,y,s;
scanf("%d",&number);
y=number;
s=1;
a=0;
while(y>0)
{
if(y%10==4) a=a+s;
s=s*10;
y=y/10;
}
printf("Case #%d: %ld %ld\n",p,number-a,a);
}
return 0;
}