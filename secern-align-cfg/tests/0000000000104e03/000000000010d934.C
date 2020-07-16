#include<stdio.h>
#include<string.h>
int main()
{
int x;
scanf("%d",&x);
while(x--)
{
int i,j;
scanf("%d %d",&i,&j);
if(i==j)
printf("IMPOSSIBLE");
else
printf("POSSIBLE");
}
return 0;
}