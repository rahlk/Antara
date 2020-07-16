#include<stdio.h>
int main()
{
int x,t,h;
scanf("%d",&x);
for(int i=1;i<=x;++i)
{
scanf("%d",&t);
t=t*2-2;
char g[50004];
char b[50004];
scanf("%s",g);
for(h=0;h<t;++h)
{
if(g[h]=='E')b[h]='S';
else b[h]='E';
}
b[h]=0;
printf("Case #1: %s\n",b);
}


return 0;
}