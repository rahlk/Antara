#include<stdio.h>
int main()
{
int testCases,z;
scanf("%d",&testCases);
for(z=1;z<=testCases;z++)
{
int grid,i;
scanf("%d",&grid);
int length=2*(grid-1)+1;
char a[length];
scanf("%s",&a);
a[length]='\0';
char b[length];
for(i=0;i<length;i++)
{
if(a[i]=='S') b[i]='E';
if(a[i]=='E') b[i]='S';
}
b[length-1]='\0';
printf("Case #%d: %s\n",z,b);
}
return 0;
}