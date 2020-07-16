#include<stdio.h>
void main()
{
int N;
int a,b,c,d,e,temp,temp1,i,j,div;
printf("enter the number of test cases:\n");
scanf("%d",&N);
for(i=1;i<N;i++)
{
printf("a number we must enter and it should contain atleast one digit as 4");
printf("enter the number:");
scanf("%d",&a);
div=a%2;
if (div==0)
{
b=a/2;
c=len(a);
for(j=0;j<c;j++)
{
d=c%10;
if(d==4) 
{
e=d;
}
}
else
{
c=len(a);
for(j=0;j<c;j++)
{
d=c%10;
if(d==4) 
{
e=d;
}
}
}
if(e=4)
{
printf("entered number can't choode");
else
{
temp=a/2;
temp1=a-temp;
}
for(i=1;i<N;i++)
{
printf("input\tcase#%d\t%d\t%d\n",\t i\ttemp\ttemp1)
