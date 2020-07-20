#include <stdio.h>

int main()
{ 
int t;
int i,j;
long int n;
char str[2000],st[2000];
scanf("%d ",&t);
for(i=1;i<=t;i++)
{
scanf("%ld ",&n);
scanf("%s ",str);
for(j=0;j<2*(n-1);j++)
{
    if(str[j]=='E')
    {st[j]='S';}
    else
    st[j]='E';
}
printf("Case #%d: ",i);
for(j=0;j<2*(n-1);j++)
{printf("%c",st[j]);}
printf("\n");
}
return 0;
}