#include<stdio.h>
void main()
{
int t,m,k=0,i;
scanf("%d",&t);
char ch[10000],arr[10000];
while(t--)
{
k++;
scanf("%d",&m);

scanf("%s",&ch);

for(i=0;i<(2*m-2);i++)
{
if(ch[i]=='E')
{arr[i]='S';}
else
{arr[i]='E';}
}
printf("Case #%d",k);
printf(": ");
for(i=0;i<(2*m-2);i++)
{printf("%c",arr[i]);
}

printf("\n");
}
}
