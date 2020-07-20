#include <stdio.h>

int main()
{
    int T, i, j, d;
    char A[9], B[9], c;
    scanf("%d\n", &T);
    for (i=1; i<=T; i++)
    {
        j = 0;
        Do
        {
            c = getchar();
            switch (c)
            {
                case '1':
                    A[j] = '1';
                    B[j] = '0';
                    break;
                case '2':
                    A[j] = '1';
                    B[j] = '1';
                    break;
                case '3':
                    A[j] = '2';
                    B[j] = '1';
                    break;
                case '4':
                    A[j] = '3';
                    B[j] = '1';
                    break;
                case '5':
                    A[j] = '3';
                    B[j] = '2';
                    break;
                case '6':
                    A[j] = '5';
                    B[j] = '1';
                    break;
                case '7':
                    A[j] = '6';
                    B[j] = '1';
                    break;
                case '8':
                    A[j] = '7';
                    B[j] = '1';
                    break;
                case '9':
                    A[j] = '8';
                    B[j] = '1';
                    break;
                default:
                    break;
            }
            j++;
        } while (c != '\n');
        printf("Case #%d: ", i)
        for (d=0; d<j; d++)
        {
            putchar(A[d]);
        }
        putchar(' ');
        if (B[0] != '0')    putchar(B[0]);
        for (d=1; d<j; d++)
        {
            putchar(B[d]);
        }
        putchar('\n');
    }
    return 0;
}