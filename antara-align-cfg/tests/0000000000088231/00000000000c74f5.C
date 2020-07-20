#include<stdio.h>
void main()
{
int a,b,x,N;
printf(" Enter the value of N : ");
scanf("%d",&N);
while(N!=0)
{
for(a=0;a<=N;a++)
{
for(b=0;b<=N;b++)
{
if(a+b==N)
{
printf("Case 1 : %d  %d /t for %d",a,b,N)
}
}
}
printf("Want to continue more (0 =no or 1 =yes) : ")
scanf(%d,&x)
if(x==0)
N=0;
else
N=1;
}
getch();
}