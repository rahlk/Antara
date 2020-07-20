#include<stdio.h>
int main()
{
long int z,y,s,a,b,c;
int x,t,i,tn;
scanf("%d",&t);
for(tn=1;tn<=t;tn++)
{
scanf("%d",&z);
y=z;
a=1;
b=z-a;
c=0;
for(x=0;x<y;x++)
{
i=y%10;
y=y/10;
if(i==4)
{
s=x;
a=1;
while(s>0 && x!=0)
{
a=a*10;
s--;
}
a=a+c;
b=z-a;
c=a;
}
}
printf("Case #%d: %d %d",tn,a,b);
}
return 0;
}