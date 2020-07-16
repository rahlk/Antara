#include<stdio.h>
#include<stdlib.h>
int main()
{
int m,a,b,i,j,str,strng;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d %d\n,&a,&b);
if(a==b)
{
printf("Case#1:IMPOSSIBLE\n");
}
else
print("Case#2:POSSIBLE\n");
str=a;
strng=b-a;
for(i=str;i<a;i++)
{
    for(j=strng;j<b;j++)
{
    printf(%d %d\n",i,j);
    j++;
    if(j==b)
    {
        j=1;
    }
}
}
}
return 0;
}