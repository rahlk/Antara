#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int t,l,x,y=1,d;
long long int n,start,first,second;
char num[150];
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
itoa(n,num,10);
l=strlen(num);
first=0;
for(x=0;x<l;++x)
{
if(num[x]=='4')
{
d=l-x;
start=1;
while(--d)
{
start*=10;
}
first+=start;
}
}
second=n-first;
printf("Case #%d: %lld %lld\n",y,first,second);
y++;
}
return 0;
}