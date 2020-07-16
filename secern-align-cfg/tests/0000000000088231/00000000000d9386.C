#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("enter two value");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap value ius=%d %d",a,b);
    getch();
}