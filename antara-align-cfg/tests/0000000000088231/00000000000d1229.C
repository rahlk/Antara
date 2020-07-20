#include<stdio.h>
int main()
{
    int N;
    int temp,a=1,b=1;
    int x=0;
    scanf("%d",&N);
    temp=N;
    while(temp!=4)
    {
        temp=temp%10;
    }
    if(temp==4)
    {
        while((a+b)!=N)
        { a++;
        b++;
        }
        x++;
    }
    printf(" Case #%d %d %d",x,a,b);
    return 0;
}