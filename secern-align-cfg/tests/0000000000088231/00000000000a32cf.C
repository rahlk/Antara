#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
int n,a,y,f,found,s;
scanf("%d",&n);
int a=0,num=n;
s=1;
while(num>0)
{
    f=num%10;
    if(f==4) a=a+s;
    s=s*10;
    num=num/10;
}
printf("Case #%d: %ld %ld\n",i,a,n-a);
}
return 0;
}