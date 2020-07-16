#include<stdio.h>
int main()
{
int grid,i;
printf("Enter a number : ");
scanf("%d",&grid);
int length=(2*grid)-1;
char a[length];
printf("Enter String : ");
scanf("%s",&a);
char b[length];
for(i=0;i<length;i++)
{
if(a[i]=='S') b[i]='E';
if(a[i]=='E') b[i]='S';
}
for(i=0;i<length;i++)
{
printf("%c",b[i]);
}
return 0;
}