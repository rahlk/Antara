#include<stdio.h>
#include<string.h>
int main()
{
int x,p,q,i,j,r,t;
scanf("%d",&x);
for(i=0;i<x;i++)
{
scanf("%d %d",&p,&q);
if(p==q)
printf("IMPOSSIBLE");
else
printf("POSSIBLE");
r=p;
t=q-p;
for(i=r;i<p;i++)
{
    for(j=t;j<q;j++)
    {
        printf("%d %d\n",i,j);
        j++;
        if(j==q)
        {
            j=1;
        }
    }
}
}
return 0;
}