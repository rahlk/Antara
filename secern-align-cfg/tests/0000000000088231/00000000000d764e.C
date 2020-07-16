#include <stdio.h>

int main()
{
    int testcase = 0;
    int n;
    int a = 0;
    int b = 0;
    scanf("%d", &testcase);
    scanf("%d", &n);
    while (a+b != n)
    {
        b++;
    }
    printf("Case #%d: %d %d", testcase, a, b);
}