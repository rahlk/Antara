#include<stdio.h>
int main()
{
    int t, k=0;
    scanf("%d", &t);
    while(t--)
    {
        int n, a, b;
        scanf("%d", &n);
        if(n%2)
        {
            printf("Case #%d: %d %d", ++k, a/2, a/2+1);
        }
        else
        {
            printf("Case #%d: %d %d", ++k, a/2, a/2);
        }
    }
}
