#include<stdio.h>
int main()
{
int t,n,x,y,m;
y=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
m=2*n;
char lynda[m],final[m];
scanf("%s",lynda);
x=0;
while(lynda[x]!='\0')
{
if(lynda[x]=='S')
{
final[x]='E';
}
else
{
final[x]='S';
}
++x;
}
final[x]='\0';
printf("Case #%d: %s\n",y,final);
++y;
}
return 0;
}