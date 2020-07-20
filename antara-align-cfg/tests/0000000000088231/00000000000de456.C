#include<stdio.h>
#include<math.h>
int main()
{
int count,test,r;
double count1;
long num,a,b;
scanf("%d",&test);
for(count=1;count<=test;count++)
{
scanf("%ld",&num);
a=num;
count1=0;
b=0;
while(num!=0)
{
r=num%10;
if(r==4)
{
a=a-2*pow(10,count1);
b=b+2*pow(10,count1);
}
count1++;
num=num/10;
}
printf("Case #%d: %ld %ld\n",count,a,b);
}
return 0;
}