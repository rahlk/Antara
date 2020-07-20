#include<stdio.h>
void main()
{
int t;
scanf("%d",&t);
while(t)
{
int p;
scanf("%d",&p);
int i,j;
for(i=1;i<p;i++)
{
for(j=1;j<=p-i;j++)
{
printf("inside j\n");
int n,r,k=0,q=0,h=0,s=0;
r=i;
n=r;
while(r!=0)
{
    k++;
n=n%10;
if(n!=4)
{
    q++;
}
r=r/10;
n=r;
}
r=j;
n=r;
while(r!=0)
{
    h++;
n=n%10;
if(n!=4)
{
    s++;
}
r=r/10;
n=r;
}
if(s==h&&q==k)
{
if(p==i+j)
{
printf("%d\t%d\n",i,j);
i=j=p;
}
}
}
}
t--;
}
}
