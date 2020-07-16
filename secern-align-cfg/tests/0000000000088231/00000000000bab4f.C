#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++)
    {
        int n;
        scanf("%d",&n);
        int num1=n*(0.75);
        int num2=n*(0.25);
        printf("Case #1: %d %d\n",num1,num2)
    }
    return 0;
}