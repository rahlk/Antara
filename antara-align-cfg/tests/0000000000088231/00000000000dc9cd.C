#include<stdio.h>
void main()
{
int t;
scanf("%d",&t);
while(t)
{
long p;
scanf("%d",&p);
int i,j;
for(i=p/2;i<p;i++)
{
int n,k=0,q=0,h=0,s=0;
n=i;
while(n!=0)
{
    k++;
if(n%10!=4)
{
    q++;
}
else{
    n=0;
    break;
}
n=n/10;
}
j=p-i;
n=j;
while(n!=0)
{
    h++;
if(n%10!=4)
{
    s++;
}
n=n/10;
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
t--;
}
}

