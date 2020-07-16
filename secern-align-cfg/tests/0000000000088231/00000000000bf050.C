#include<stdio.h>
int contains4at(int);
int main() {
   int t,x,n,xn,pos,a,b,pos1,pos2;
   t=4;
   printf("\nEnter value of t ");
   scanf("%d",&t);
   for(x=1;x<=t;x++)
  {
  //n=23454;
   printf("\nEnter value of n ");
       scanf("%d",&n);
while(1)
{
xn=n;
while(1)
{
pos=contains4at(xn);
if(pos==0)
break;
xn=xn-pos;
}
a=xn;
b=n-xn;
while (1)
{
pos=contains4at(b);
if(pos==0)
break;
b=b-pos;
}
a=n-b;
pos1=contains4at(a);
pos2=contains4at(b);
if(pos1==0 && pos2==0)
break;
if(pos1!=0)
xn=a+1;
}
printf("\n%d   %d",a,b);
   }

return 0;
}

int contains4at (int xn)
{
int p=1;
int d;
int yn;
yn=xn;
while (yn!=0)
{
d=yn%10;
yn=yn/10;
if(d==4)
return p;
p*=10;
}
return 0;
}