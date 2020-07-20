#include<stdio.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&c);
    
    while(c)
    {
        scanf("%d",&n);
        a=n%3;
        b=n-a;
        printf("%d %d",a,b);
        
        c--;
    }
    return 0;
}