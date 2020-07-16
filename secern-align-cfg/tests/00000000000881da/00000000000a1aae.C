#include<stdio.h>
#include<malloc.h>
int main()
{
int testcases;
scanf("%d",&testcases);
int n;
char* str=(char*)malloc(sizeof(char)*50010);
char* out=(char*)malloc(sizeof(char)*50010);
int cas=1;
int i;
while(testcases--)
{
scanf("%d",&n);
scanf("%s",str);
for(i=0;str[i];i++)
{
if(str[i]=='E')out[i]='S';
if(str[i]=='S')out[i]='E';
}
out[i]='\0';
printf("Case #%d: %s\n",cas,out);
cas++;
}
return 0;
}