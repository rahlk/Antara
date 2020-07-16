#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,r,c,i,j,str,stc,r1,c1;
//printf("Enter Numbers of Test Cases :: ");
scanf("%d",&t);
scanf("%d %d\n",&r ,&c);

for(i=0;i<t;i++)
{
    scanf("%d %d\n",&r1 ,&c1);
if(r1==c1 || r==r1 || c==c1 || (r-c)==(r1-c1) || (r+c)==(r1+c1) ){
printf("Case #1: IMPOSSIBLE\n");
}
printf("Case #2: POSSIBLE\n");
str = r;
stc = c-r;
for(i=str;i<r;i++)
{
for(j=stc;j<c;j++)
{
printf("%d %d\n",i,j);
j++;
if(j==c)
{
j = 1;
}
}
}
}
return 0;
}