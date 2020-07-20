#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    
    c=a;
    a=b;
    b=c;
    printf("The number after swaping:%d%d\n",a,b);
    return(0);
}