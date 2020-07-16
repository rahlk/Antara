#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number of elements\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    c=a+b;
    else
    {
        c=a-b;
    }
    printf("The sum of two number is:=%d\n",c);
    return(0);
}