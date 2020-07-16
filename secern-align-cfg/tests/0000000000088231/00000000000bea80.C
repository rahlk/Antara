#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    char n[100000];
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        printf("Case #%d: ", i+1 );
        char c;
        char A[100], B[100], n[200];
        scanf ("%s", n);
        for (int i = 0; i < strlen(n); ++i)
        {
            if (n[i]-'0' == 4)
            {
                A[i]='2';
                B[i]='2';
            }
            else
            {
                A[i]=n[i];
                B[i]='0';
            }
        }
        printf("%s ", A);
        printf("%s\n", B);
    }
    return 0;
}