#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
int i,j;
int n,t;
char *x;
scanf("%d",&t);
int u=1;
while(t--)
{
scanf("%d",&n);
fflush(stdin);
int maze[n][n],m[n][n];
char my[n];

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
maze[i][j]=0; 
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
m[i][j]=0; 
}
}


x=(char *)malloc(sizeof(char)*100);
fgets(x,100,stdin);
int ii=0;
i=0;
j=0;
int nn=0;
while(x[ii]!='\0')
{
if(x[ii]=='S') 
{
i=i+1;
maze[i][j]=1;
m[i][j+1]=1;
my[nn]='E';
nn++;
}
if(x[ii]=='E')
{
j=j+1;
maze[i][j]=1;
m[i+1][j]=1;
my[nn]='S';
nn++;
}
ii++;
}
my[nn]='\0';
printf("Case #%d: %s",u++,my);
}
return 0;
}