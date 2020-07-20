#include<stdio.h>
#include<malloc.h>
int contains(unsigned int num)
{
int j,dig;
int x[20];
j=0; 
while(num>0)
{
dig= num%10;
num=num/10;
x[j]=dig;
j++;
}
num=0;
for(;num<j;num++)
{
if(x[num]==4)return 1;
}
return 2;
}

int main()
{
int numberOfTestCases;
int number;
scanf("%d",&numberOfTestCases);
for(int r=0;r<numberOfTestCases;r++)
{
scanf("%d",&number);
int tempNumber=number;
int d=0; 
for(;tempNumber>0;tempNumber--)
{
for(int i=0;i<number;i++)
{
if(i<tempNumber)d=tempNumber-i;    
else break;
if(contains(d)==2 && d+i==number)
{
printf("Case #%d:  %d   %d  ",r+1,d,i);    
return 0;
}
}
}
}
 return 0;   
}