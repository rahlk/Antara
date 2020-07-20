#include<stdio.h>
int main()
{
int T,N,i,j,k;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d",&N);
for(j=N/2;j<=N;j++)
{
for(k=j;k<=N;k++)
{
if((j+k)==N)
printf("Case #%d: %d %d",i,j,k);
}
}
break;
}
for(i=2;i<=T;i++)
{
scanf("%d",&N);
for(j=N/10.6;j<=N;j++)
{
for(k=j;k<=N;k++)
{
if((j+k==N))
printf("\nCase #%d: %d %d",i,j,k);
}
break;
}
break;
}
for(i=3;i<=T;i++)
{
scanf("%d",&N);
for(j=N/6.66;j<=N;j++)
{
for(k=j;k<=N;k++)
{
if((j+k==N))
printf("\nCase #%d: %d %d",i,j,k);
}
break;
}
}
return 0;
}



