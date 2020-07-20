#include<stdio.h>
int main()
{
int tc;
scanf("%d",&tc);
int y,x,s[50001];
char a[tc][50010];
for(y=0;y<tc;++y)
{
scanf("%d",&s[y]);
scanf("%s",a[y]);
}
for(y=0;y<tc;++y)
{
x=0;
while(a[y][x]!='\0')
{
if(a[y][x]=='S') a[y][x]='E';
else a[y][x]='S';
x++;
}
printf("Case #%d: %s\n",y+1,a[y]);
}
return 0;
}