#include<stdio.h>
int main()
{
int testcases;
scanf("%d",&testcases);
for(int p=1;p<=testcases;p++)
{
int i,n;
scanf("%d",&n);
char a[2*n-2];
scanf("%s",a);
char b[2*n-2];
if(a[0]=='E') b[0]='S';
else b[0]='E';
if(a[2*n-3]=='E') b[2*n-3]='S';
else b[2*n-3]='E';
for(i=1;i<(2*n-2);i++)
{
if(a[i]=='E') b[i]='S';
else b[i]='E';
}
a[i]='\0';
b[i]='\0';
printf("Case #%d: %s\n",p,b);
}
return 0;
}