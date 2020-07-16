#include<stdio.h>
#include<string.h>
void itoa(long long int number,char *p)
{
int temp;
int numberOfDigits;
int f;
numberOfDigits=0;
for(temp=number;temp>0;temp=temp/10) numberOfDigits++;
p[numberOfDigits]='\0';
for(temp=number,f=numberOfDigits-1;f>=0;f--,temp=temp/10)
{
p[f]=(temp%10)+48;
}
}
int main()
{
int t,l,x,y=1,d;
long long int n,start,first,second;
char num[150];
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
itoa(n,num);
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
}//for ends
second=n-first;
printf("Case #%d: %lld %lld\n",y,first,second);
y++;
}
return 0;
}