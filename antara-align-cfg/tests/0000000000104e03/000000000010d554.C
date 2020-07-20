#include<stdio.h>
int main(){
int T,x;
scanf("%d",&T);
int i=0,j=0,a[T][T];
for(i=0;i<T;i++)
{
for(j=0;j<T;j++)
{
scanf("%d",&a[i][j]);
}}
for(i=0;i<T;i++)
{
for(j=0;j<T;j++)
{
if(a[i][j+1]!=a[j][i+1])
{
x=2;
}
if(a[i+1][j]!=a[j+1][i])
x=1;
}
}
if(x==2)
{
printf("Case #1: POSSIBLE\n");
}
else
printf("Case #1: IMPOSSIBLE\n");
if(x==1)
{
printf("Case #2: POSSIBLE\n");
}
else
printf("Case #2: IMPOSSIBLE\n");
}
