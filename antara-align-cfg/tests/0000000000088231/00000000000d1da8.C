#include<stdio.h>
int main()
{
int T,N,i,j,k;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d",&N);
for(j=1;j<=N;j++)
{
for(k=j+1;k<=N;k++)
{
if((j+k)==N)
printf("Case #%d: %d %d",i,j,k);
}
break;
}
printf("\n");
}
return 0;
}
