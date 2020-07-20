#include<stdio.h>
int main()
{
    int a,b,diff;
     printf("Enter first number :");
     scanf("%d",&a);
     printf("Enter the second number:");
     scanf("%d",&b);
     
     if(a>b)
     diff=a-b;
     else
     diff=b-a;
     printf("The Difference   numbers is:%d and %d=%d\n",a,b,diff);
     return 0;
}