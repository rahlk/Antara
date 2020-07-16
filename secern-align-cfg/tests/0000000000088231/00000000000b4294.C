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
 printf("%d %d\n",a,b);
}
 else if (num<100)
{a=num-11;
b=11;
printf("%d %d\n",a,b);
}
else if(num<1000)
{    a=num-111;
    b=111;
    printf("%d %d\n",a,b);
}
else if(num<10000)
{    a=num-1111;
    b=1111;
    printf("%d %d\n",a,b);
}
else if(num<100000)
{    a=num-11111;
    b=11111;
    printf("%d %d\n",a,b);
}
else if(num<1000000)
{    a=num-111111;
    b=111111;
    printf("%d %d\n",a,b);
}
else if(num<10000000)
{    a=num-1111111;
    b=1111111;
    printf("%d %d\n",a,b);
}
else if(num<100000000)
{    a=num-11111111;
    b=11111111;
    printf("%d %d\n",a,b);
}
}
 return 0;
}