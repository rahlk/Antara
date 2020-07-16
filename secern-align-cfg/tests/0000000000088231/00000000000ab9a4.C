#include<stdio.h>
int main()
{
int t,i,factor=1;
long long int  n,a,b,flag,temp1,temp2,num,num1;
printf("Enter test cases : ");
scanf("%d",&t);
for(i=1;i<=t;++i)
{
printf("Enter no. of jamcoins : ");
scanf("%lld",&n);
// code to be written
if(n%2==0) 
{
num=n/2;
a=n/2;
b=n/2;
temp1=num;
}
else
{
num=n/2;
num1=n/2+1;
a=n/2;
b=n/2+1;
temp1=num;
temp2=num1;
}
if(a==b)
{
while(temp1)
{
temp1=temp1/10;
factor=factor*10;
}
while(factor>1)
{
factor = factor/10;
//printf("%d ",num/factor);
flag=num/factor;
if(flag==4)
{
a+=factor;
b-=factor;
}
num=num%factor;
}
}
else
{

//yet to write

}
printf("Case #%d:%lld %lld\n",i,a,b);
}
return 0;
}