#include <stdio.h>
#include <math.h>
int main()
{
int test,a,b;
scanf("%d",&test);
int x=1;
if(test>=1 && test<=100)
{
while(test>0)
{
int num;
scanf("%d",&num);
int temp=num; 
int ans=0;
int i=0;

while(num!=0)
{
    int rmd=num%10;
    if(rmd!=4){i++; num=num/10; continue;}
    else if(rmd==4){temp-=pow(10,i);num=num/10; ans+=pow(10,i); i++;continue; }
}printf("Case #%d:%d %d\n",x++,temp,ans);
test--;
}
}
}