#include<stdio.h>
void main()
{
int t,m,k=0,i;
scanf("%d",&t);
char ch[10000],arr[10000];
while(t!=0&&t>0)
{
k++;
scanf("%d",&m);
for(i=0;i<(2*m-2)+1;i++)
{
scanf("%c",&ch[i]);
}

for(i=0;i<(2*m-2)+1;i++)
{
if(ch[i]!='E')
{arr[i]='E';}
else
{arr[i]='S';}
}
printf("Case #%d",k);
printf(": ");
for(i=0;i<(2*m-2)+1;i++)
printf("%c",arr[i+1]);

printf("\n");
t--;
}
}
