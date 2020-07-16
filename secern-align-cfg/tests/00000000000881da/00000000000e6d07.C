#include<stdio.h>
#include<string.h>
int main()
{
int x;
scanf("%d",&x);
int number=1;
while(x--)
{
char g[500002],b[500002];
int n,l,t,i;
scanf("%d",&n);
scanf("%s",&g);
l=strlen(g);
b[l]=0;
t=2*n-2;
for(i=0;i<t;i++)
{
if(g[i]=='E')b[i]='S';
else b[i]='E';
}
printf("Case #%d: %s\n",number,b);
number++;
}


return 0;
}