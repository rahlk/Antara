#include<stdio.h>
int main()
{
    int t, k=0;
    scanf("%d", &t);
    while(t--)
    {
        int n, i=0, a, b;
        scanf("%d", &n);
        a=n/4;
        if(n%4)
            b=3*n/4+1;
        else
            b=3*n/4;
        printf("case #%d: %d %d", ++i, a, b);
    }
    printf("\n");
    return 0;
}
