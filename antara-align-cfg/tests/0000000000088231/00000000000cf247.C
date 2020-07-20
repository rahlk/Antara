#include<stdio.h>
//#include<conio.h>
void main()
{
long int i,j,a,b,b1,d,d1,d2,e1,e2,e;
int n,c;
//printf("enter number of test");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
e1=0
e2=0;
d1=0;
d2=0;
j=0;
//printf("enter cases");
scanf("%ld",&i);
while(i>0)
{
b=i%10;
if(b==4)
{
d=2;
e=2;
d1=d1*10+d;
e1=e1*10+e;
}
else if(b==0)
{
d1=d1*10;
e1=e1*10;
}
else
{
d=b/2;
e=b-d;
if(d==0)
{
d1=d1*10;
}
else
{
d1=d1*10+d;
}
e1=e1*10+e;
}
i=i/10;
if(j==0)
{
b1=b;
}
j++;
}
while(d1>0)
{
a=d1%10;
d2=d2*10+a;
d1=d1/10;
 }
while(e1>0)
{
a=e1%10;
e2=e2*10+a;
e1=e1/10;
 }
if(b1==1)
d2=d2*10;
else if(b1==0)
{
d2=d2*10;
e2=e2*10;
}
printf("\ncase%d# %ld\t%ld",c,d2,e2);
}
getch();
}