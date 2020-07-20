#include<stdio.h>
#include<malloc.h>
int main()
{
int x,t;
int k;
char *s;
scanf("%d",&x);
for(int i=0;i<x;++i)
{
scanf("%d",&t);
fflush(stdin);
t*=2;
s=(char*)malloc(sizeof(char)*t);
fgets(s,t,stdin);
k=t-2;
printf("Case #%d: ",i+1);
for(int g=0;g<k;++g)
{
if(s[g]=='E')printf("S");
else printf("E");
}
printf("\n");
free(s);
}
return 0;
}