#include<stdio.h>

int finddigit(int);

int finddigit(int val)
{
    int rem;
    while(val>0){
    rem=val%10;
    if(rem==4)
    return 1;
    val=val/10;
    }
    
    return 2;
}

int main()
{
int i=0,j=0,num=0,digit=0,sum=0,T,temp=0,num1=0,num2=0;

{
	  	    	scanf("%d",&num);
for(i=num/2;i>0;i++)
{
for(j=num/2;j>0;j++)
{
sum=i+j;

if(sum==num)
   {
    
num1=finddigit(i);
num2=finddigit(j);
if(num1==2 && num2==2)
   {
printf("%d\t%d\n",i,j);
break;
   }
    }
}
if(num1==2 && num2==2)
break;
}
}
return 0;
}
