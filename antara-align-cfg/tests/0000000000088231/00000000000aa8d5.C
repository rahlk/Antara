#include<stdio.h>
int main()
{
int x,y,z,e,f,m,n,t=0;
scanf("%d",&x);
for(e=0;e<x;e++)
{
scanf("%d",&f);
for(m=2;m<9;m++)
{
t=0;
y=f/m;
z=f-y;

for(n=y;n>1;n=n/10)
{
if(n==4)
{
t=1;
break;
}
}

for(n=z;n>1;n=n/10)
{
if(n==4)
{
t=1;
break;
}
}

if(t==0)
{
printf("case #%d :%d %d",e,y,z); 
break;
}

}

}
return 0;
}