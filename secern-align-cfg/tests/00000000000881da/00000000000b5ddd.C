#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ans(char* p,int s)
{
    int i=0;
while(p[i]!=0)
{
if(p[i]=='S')
{
p[i]='E';
}
else
{
p[i]='S';
}
i++;
}
printf("Case #%d: %s\n",s,p);
}
int main()
{
int t;
scanf("%d",&t);
int nog;
char* c;
for(int i=0;i<t;i++)
{
scanf("%d",&nog);
c=(char *)malloc(2*nog*sizeof(char));
scanf("%s",c);
ans(&c[0],i+1);
}
return 0;
}