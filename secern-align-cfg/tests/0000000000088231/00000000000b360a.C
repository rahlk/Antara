#include<stdio.h>
int main()
{ int n,i,num,a,b;
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&num);
 if(num<10)
 {a=num-1;
 b=1;
 printf("%d %d",a,b);
 break ;}
 else if (num<100)
{a=num-11;
b=11;
printf("%d %d",a,b);
 break ;}
else if(num<1000)
{    a=num-111;
    b=111;
    printf("%d %d",a,b);
 break ;
}
}
 return 0;
}