#include<stdio.h>

int main()
{
int t,a,b,i;
scanf("%d",&t);
a=t/2;
for(i=1;a>0;i=i*10)
{
    a=a-i;
}
a=a+(i/10);
b=t-a;
prinf("%d %d",a,b);
return 0;
}