#include<stdio.h>
int main()
{
int x,i=0,j,sum1,number,p;
scanf("%d",&x);

while(i<x)
{
scanf("%d",&p);
printf("Case #%d: ",i+1);
sum1=0;
number=p;
j=1;
while (p> 0)
 {
if(p%10==4) 
{
sum1+=j;
}
p = p/ 10;
j*=10;
}
printf("%d  %d \n",number-sum1,sum1);
++i;
}
return 0;
}