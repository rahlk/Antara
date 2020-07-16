#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,i,num1,temp1,temp2,num2,rem1,rem2,diff,sum=0;
scanf("%d\n",&t);
for(i=0;i<t;i++)
{
scanf("%d%d\n",&num1,&num2);
temp1=num1;
temp2=num2;
while(num1!=0 && num2!=0)
{
    rem1=num1%10;
    temp1=rem1;
    if(temp1!=4)
    {
    rem2=num2%10;
    temp2=rem2;
    if(temp2!=4)
    {
    diff=abs(temp1-temp2);
    if(diff%2==0)
    {
        sum=num1+num2;    
    }
    }
    }
}
printf("%d\n",sum);
}
return 0;
}