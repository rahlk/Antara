#include<stdio.h>
void main()
{
int N,n;
int a,b,count,d,e,temp,temp1,i,j,div;
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
while(b != 0)
{
    // n = n/10
    b /= 10;
    ++count;
}

for(j=0;j<count;j++)
{
d=b%10;
if(d==4) 
{
e=d;
}
}
}
else
{
while(b != 0)
{
    // n = n/10
    b /= 10;
    ++count;
}
for(j=0;j<count;j++)
{
d=b%10;
if(d==4) 
{
e=d;
}
}
}
if(e=4)
{
printf("entered number can't choose");
}
else
{
temp=a/2;
temp1=a-temp;
}
for(i=1;i<N;i++)
{
printf("input tcase#%d %d %d",&i ,&temp,&temp1);
}
}