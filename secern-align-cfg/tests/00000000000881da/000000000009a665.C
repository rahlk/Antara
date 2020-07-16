#include<stdio.h>
int main()
{
int n,a,b,i,rem,nex,k,a2=0,j;

scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
b=2*a-2;
char s[b];
scanf("%s",s);
for(j=0;j<b;j++)
{
if(s[j]=='S')
s[j]='E';
else if(s[j]=='E')
s[j]='S';
}
printf("Case #%d: %s",i,s);
}
return 0;
}