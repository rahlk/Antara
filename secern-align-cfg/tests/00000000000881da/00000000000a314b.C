#include<stdio.h>
#include<string.h>
int main()
{
int t,n,i,k,m=0;
char s[100000];
scanf("%d",&t);
k=t;
while(t--)
{
scanf("%d",&n);
scanf("%s",s);
printf("Case #%d: ",k-(k-(m++))+1);
for(i=0;i<strlen(s);i++)
{
if(s[i]=='S')
printf("E");
else
printf("S");
}
printf("\n");
}
return 0;
}
