#include<stdio.h>
#include<malloc.h>
int main()
{
int k;
scanf("%d",&k);
int *x=(int*)malloc(sizeof(int)*k);
char **t=(char**)malloc(sizeof(char*)*k);
for(int i=0;i<k;++i)
{
scanf("%d",&x[i]);
t[i]=(char*)malloc(sizeof(char)*(2*x[i]-2));
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