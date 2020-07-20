#include<stdio.h>
int rem(int a)
{
while(a>0){
int rem=a%10;
if(rem==4){
return -1;
break;}
a=a/10;
}
return 0;}
int main()
{
int t,n,a,b;
scanf("%d",&t);
for(int j=1;j<=t;j++)
{
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if(rem(i)==0&&rem(n-i)==0)
a=i;
break;
}
printf("Case #%d: %d %d\n",j,a,n-a);}}