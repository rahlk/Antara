#include<stdio.h>

int main()

{

int t;

scanf("%d",&t);

for(int i=1;i<=t;i++)

{

int n,a,b,h,x,y,f,found,s;

scanf("%d",&n);

h=n/2;

while(1)

{

a=n-h;

b=h;

x=a;

y=b;

found=0;

s=1;

while(x!=0)

{

f=x%10;

if(f==4)

{

found=1;

break;

}

s=s*10;

x=x/10;

}

s=1;

if(found!=0)

{

while(y!=0)

{

f=y%10;

if(f==4)

{

found=1;

break;

}

s=s*10;

y=y/10;

}

}

if(found==0) break;

else h=h+s;

}

printf("Case #%d: %d %d",i,a,b);

}

return 0;

}