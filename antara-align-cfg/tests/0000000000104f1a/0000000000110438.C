#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,r,c,i,j,str,stc;
scanf(%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %d\n",&r,&c);
if(r==c){
printf("case #1:IMPOSSIBLE\n");
}
printf("case#2: pPOSSIBLE\n");
str=r;
stc=c-r;
for(i=str;i<r;i++)
{
for(j=stc;j<c;j++)
{
printf(%d %d\n",i,j);
j++;
{
j=1;
}
}
}
}
return 0;
}