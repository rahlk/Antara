#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
int i,j;
int n,t;
char *x;
int u=1;
scanf("%d",&t);
fflush(stdin);
while(t--)
{
scanf("%d",&n);
fflush(stdin);

x=(char *)malloc(sizeof(char)*100);
fgets(x,1000,stdin);
fflush(stdin);
int j=0;
while(x[j+1]!='\0')
{
if(x[j]=='S') 
{
x[j]='E';
}
else
{
x[j]='S';
}
j++;

}
x[j]='\0';
printf("Case #%d: %s",u++,x);
printf("\n");
}
return 0;
}