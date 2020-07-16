#include<stdio.h>
#include<string.h>
int main()
{
int t,i=0,j;
scanf("%d",&t);
char input[t][1000],output[t][1000];
int num[t];
while(i<t)
{
scanf("%d",&num[i]);
scanf("%s",&input[i][0]);
i++;
}
i=0;
while(i<t)
{
j=0;
while(input[i][j]!='\0')
{
if(input[i][j]=='E')
{
output[i][j]='S';
}
else
{
output[i][j]='E';
}
j++;
}
output[i][j]='\0';
i++;
}
i=0;
while(i<t)
{
printf("Case #%d: %s\n",i+1,output[i]);
i++;
}
return 0;
}