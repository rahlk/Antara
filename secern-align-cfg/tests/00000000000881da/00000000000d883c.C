#include<stdio.h>
#include<string.h>
int main()
{
int test,n,i;
char s[10000];
scanf("%d",&test);
for(int a0=1;a0<=test;a0++)
{scanf("%d",&n);
scanf("%s",&s);
int m;
m=strlen(s);
printf("Case #%d: ",a0);
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
