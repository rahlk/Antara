#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int m,n;
    for(int i=0;i<x;i++)
    {
        scanf("%d %d",&m,&n);
    }
    printf("%d %d",m,n);
    return 0;
}