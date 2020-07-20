#include<stdio.h>
int check(unsigned long a)
{
int i,j,b;
for(i=10,j=1;a*10>i;j=i,i=i*10)
{
b=(a%i);
b=b/j;
if(b==4) return 0;
}
return 1;
}
int main()
{
int t,i;
scanf("%d",&t);
i=1;
unsigned long num,a,b;
while(t--)
{
scanf("%lu",&num);
a=num/2;
b=num-a;
if(check(a) && check(b)) printf("Case #%d : %lu %lu\n",i,a,b);
else
{
a=1;
b=num-1;
if(check(b)) printf("Case #%d : %lu %lu\n",i,a,b);
else
{
a=num/3;
b=num-a;
if(check(a) && check(b)) printf("Case #%d : %lu %lu\n",i,a,b);
}
}
i++;
}
return 0;
}