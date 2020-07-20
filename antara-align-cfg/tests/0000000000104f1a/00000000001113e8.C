#includ<stdio.h>
#include<stdlib.h>
int main()
{
int t,r,c,i,j,str,stc;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d%d\n",&r,&c);
if(r==c){
printf("case#1:inpossible\n");
}printf("case#2:possible\n");
str=r;
stc=c-r;
for(i=str;i<r;i++)
{
printf("%d%d\n",i,j);
j++;
if(j==c)
{
j=1;
}
}
}
}
return 0;}