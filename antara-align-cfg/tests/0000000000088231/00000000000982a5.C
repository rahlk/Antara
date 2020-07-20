#include<stdio.h>
#include<malloc.h>
int contains(int number)
{
int j,digit;
int x[20];
j=0; 
while(number>0)
{
digit= number%10;
number=number/10;
x[j]=digit;
j++;
}
number=0;
for(;number<j;number++)
{
if(x[number]==4)return 1;
}
return 2;
}
int main()
{
int numberOfTestCases;
int number;
scanf("%d",&numberOfTestCases);
int found;
int tempNumber;
int d;
for(int r=0;r<numberOfTestCases;r++)
{
scanf("%d",&number);
tempNumber=number;
found=0;
d=0; 
if(contains(number)==1)
{
for(;tempNumber>0;tempNumber--)
{
for(int i=0;i<number;i++)
{
if(found==1)break;
if(i<tempNumber)d=tempNumber-i;    
else break;
if(contains(d)==2 && d+i==number)
{
printf("Case #%d: %d   %d\n",r+1,d,i);    
found=1;
break;
}
}
}
}
}
return 0;   
}