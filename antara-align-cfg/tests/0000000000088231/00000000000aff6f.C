#include<stdio.h>

int finddigit(int);

int finddigit(int val)
{
    while(val>0){
    val=val%10;
    if(val==4)
    return 1;
    val=val/10;
    }
    
    return 2;
}

int main()
{
int i=0,j=0,num=0,digit=0,sum=0,T,temp=0,num1=0,num2=0;
scanf("%d",&T);
while(T--){
	  	    	scanf("%d",&num);
for(i=1;i<num/2;i++)
{
for(j=1;j<num;j++)
{
sum=i+j;

if(sum==num)
{
    printf("enters into loop\n");
num1=finddigit(i);
num2=finddigit(j);
if(num1==2 && num2==2)
printf("%d\t%d",i,j);
break;
}
}
if(num1==2 && num2==2)
break;
}
}
return 0;
}
