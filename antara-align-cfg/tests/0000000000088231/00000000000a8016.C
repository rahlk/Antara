#include<stdio.h>
int main()
{
int a,b,x,y;
//printf("Enter 2 value");
scanf("%d%d",&a,&b);
x=a;y=b;
    if(x==4||y==4)
    {
    printf("Invalid");
    }
    else if(x>0)
    {
        if(x%10==4)
        {
        printf("invalid");
        }
    }
    else if(y>0)
    {
        if(y%10==4)
        {
        printf("invalid");
        }
    }
    else
    {
     printf("%d",a+b);
    }
return 0;
}