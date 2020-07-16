#include<stdio.h>
int main()
{
int k,m;
scanf("%d",&k);
char t[k][5001];
for(int i=0;i<k;++i)
{
scanf("%d",&m);
scanf("%s",t[i]);
}
for(int i=0;i<k;++i)
{
for(int j=0;t[i][j]!='\0';++j)
{
if(t[i][j]=='E')t[i][j]='S';
else t[i][j]='E';
}
printf("Case #%d: %s\n",i+1,t[i]);
}
return 0;
}