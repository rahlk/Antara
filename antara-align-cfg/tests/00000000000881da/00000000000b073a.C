#include<stdio.h>
int main()
{
int t,j,i,n;
char p[100002],pn[100002];
scanf("%d",&t);
for(i=1;i<=t;++i)
{
scanf("%d",&n);
scanf("%s",p);
for(j=0;p[j]!='\0';++j)
{
if(p[j]=='S') pn[j]='E';
else pn[j]='S';
}
pn[j]='\0';
printf("Case #%d: %s\n",i,pn);
}
return 0;
}