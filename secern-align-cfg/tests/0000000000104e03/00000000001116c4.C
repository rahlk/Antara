#include<stdio.h>
int main()
{
int a,i,j,h,s,t;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d %d",&h,&s);
if(h==s)
{
printf("case #1: IMPOSSIBLE\n");
}
else
printf("case #2: POSSIBLE\n");
t=h;
c = s-h;
for(i=t;i<h;i++)
{
for(j=c;j<s;j++)
{
printf("%d %d\n",i,j);
j++;
if(j==s)
{
j=1;
}
}
}
}
return 0;
}
