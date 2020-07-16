#include<stdio.h>
#include<string.h>
int main()
{
int t,n,i;
char s[10000];
scanf("%d",&t);
while(t--)
{scanf("%d",&n);
scanf("%s",&s);
int m;
m=strlen(s);
for(i=0;i<m;i++)
{
    if(s[i]=='S')
    printf("E");
    else
    printf("S");
}
printf("\n");
}
}