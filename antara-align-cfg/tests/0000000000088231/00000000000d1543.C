#include<stdio.h>
void checker(int ,int);
int containFour(int);
int main()
{
int a,b,n,t,i,temp;
scanf("%d",&t);
for(i=1;i<=t;t++)
{
scanf("%d",&n);
temp=n;
if(!containFour(temp))
{
printf("%d\n",n);
continue;
} 
a=temp/2;
b=temp-a;
checker(a,b);
printf("case #%d",i);
printf(":%d %d",a,b);
}
return 0;
}
int containFour(int num)
{
int r,count=1;
while(num>0)
{
r=num%10;
if(r==4)
{
return count;
}
num/=10;
count*=10;
return count;
}
return 0;
}
void checker(int x,int y)
{
int i=containFour(x);
if(i)
{
x=x-i;
y=y+i;
checker(x,y);
}
i=containFour(y);
if(i)
{
x=x-i;
y=y+i;
checker(x,y);
}
}