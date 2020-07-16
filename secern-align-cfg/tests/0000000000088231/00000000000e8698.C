#include<stdio.h>
int test(int unsigned long p)
{
    unsigned long int x = p;
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
void ans(int unsigned long x)
{
    int unsigned long a, b, i;
    for(i=1;i<x/2;i++)
    {
        a=i; b=x-i;
        if(test(a)==0 && test(b)==0)
            break;
    }
    printf("%lu %lu\n", a, b);
}
void main()
{
    int T;
    int unsigned long N[10];
    scanf("%d", &T);
    for(int i=0; i<T; i++)
        scanf("%lu", &N[i]);
    for(int i=0; i<T; i++)
    {
        printf("Case #%d: ", i+1);
        ans(N[i]);
    }
}