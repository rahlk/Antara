#include<stdio.h>
int main()
{
int t,num,y=1;
scanf("%d",&t);
while(t>0)
{
scanf("%d",&num);
char input[2*num],output[2*num];
scanf("%s",input);
int x=0;
while(input[x]!='\0')
{
if(input[x]=='E')
{
output[x]='S';
}
else
{
output[x]='E';
}
++x;
}
output[x]='\0';

printf("Case #%d: %s\n",y,output);
y++;
--t;
}
return 0;
}