#include<stdio.h>
int main()

{

int t;

scanf("%d",&t);

for(int i=1;i<=t;i++)

{

int n,e;
scanf("%d",&n);
int size=(2*n)-2;
char p[size];
scanf("%s",&p);
char m[size];
for(e=0;e<size;e++)
{
if(p[e]=='S') m[e]='E';
else m[e]='S';
}
m[e]='\0';
printf("Case #%d: %s\n",i,m);
}

return 0;
}