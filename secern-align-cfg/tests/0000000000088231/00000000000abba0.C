#include<stdio.h>
int main()
{
int x,e,f,m,n,t=0;
scanf("%d",&x);
int y[x],z[x];
for(e=1;e<=x;e++)
{
scanf("%d",&f);
for(m=2;m<9;m++)
{
t=0;
y[e]=f/m;
z[e]=f-y[e];

for(n=y[e];n>1;n=n/10)
{
if(n==4)
{
t=1;
break;
}
}

for(n=z[e];n>1;n=n/10)
{
if(n==4)
{
t=1;
break;
}
}

if(t==0)
{
break;
}

}
}
for(e=1;e<=x;e++)
{
printf("Case #%d: %d %d\n",e,y[e],z[e]);
}
return 0;
}