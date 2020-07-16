#include<stdio.h>
#include<stdlib.h>
void codejam(long int,long int);
void main()
{
int i,t,remainder;
long int a,b,c,d;
printf("Enter Test Condition\n");
scanf("%d",&t);
for(i=1;i!=t+1;i++)
{
printf("Enter Amount\n");
scanf("%d",&d);
c=d;
while(d>0)
{
remainder=d%10;
if(remainder==4)
break;
d=d/10;
}
if(d==0)
{
printf("Please enter the valid amount\nHint:\nIn the enterd amount there is atleast one digit 4 is present.\n");
continue;
}
a=1;
b=c-1;
codejam(a,b);
}
}
void codejam(long int a,long int b)
{
long int c,d;
int remainder,t;
c=a;
d=b;
while(b>0)
{
remainder=b%10;
if(remainder==4)
break;
b=b/10;
}
while(a>0)
{
t=a%10;
if(t==4)
break;
a=a/10;
}
if(b==0&&a==0)
{
printf("%ld %ld\n",c,d);
}
else
codejam(c=c+2,d=d-2);
}





