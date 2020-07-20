#include<stdio.h>
int test(int x)
{
    int flag = 0;
    while(x!=0)
    {
        if(x%10==4)
        {
            flag++; break;
        }
        x/=10;
    }
    return flag;
}
void ans(int x)
{
    int a, b;
    for(int i=1;i<x/2;i++)
    {
        a=i; b=x-i;
        if(test(a)==0 && test(b)==0)
            break;
    }
    printf("%d %d\n", a, b);
}
void main()
{
    int T, N[10];
    scanf("%d", &T);
    for(int i=0; i<T; i++)
        scanf("%d", &N[i]);
    for(int i=0; i<T; i++)
    {
        printf("Case #%d: ", i+1);
        ans(N[i]);
    }
}