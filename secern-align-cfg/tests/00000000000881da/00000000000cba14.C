#include<stdio.h>
int main()
{
int testCases,z;
scanf("%d",&testCases);
for(z=0;z<testCases;z++)
{
int grid,i;
scanf("%d",&grid);
int length=2*(grid-1)+1;
char a[length];
scanf("%s",&a);
char b[length];
for(i=0;i<length;i++)
{
if(a[i]=='S') b[i]='E';
if(a[i]=='E') b[i]='S';
}
for(i=0;i<length-1;i++)
{
printf("%c",b[i]);
}
}
return 0;
}