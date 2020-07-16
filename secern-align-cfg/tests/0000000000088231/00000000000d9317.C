#include<stdio.h>
int getDigitCount(int);
int main()
{
int x,y,c,t;
scanf("%d",&x);
for(int i=0;i<x;++i)
{
scanf("%d",&y);
t=0;
c=getDigitCount(y);
y=y-c;
printf("Case #%d: %d %d",i+1,y,c);
printf("\n");
}
return 0;
}


int getDigitCount(int number)
{
int t=0;
int h;
int c=1;
int n=0;
while(number>0)
{
h=number%10;
if(h==4)n=n+(h-1)*c;
else
{
n=n+h*c;
}
c=c*10;
number=number/10;
}
return n;
}