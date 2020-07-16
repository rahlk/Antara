#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nr_of_4(unsigned long long n)
{
    int k = 0;
    while (n)
    {
        if (n % 10 == 4)
            k++;
        n = n / 10;
    }
    return k;
}

int where_is_4(unsigned long long n)
{
    int k = -1;
    while (n)
    {
        if (n % 10 == 4)
            return k;
        n = n / 10;
        k++;
    }
    return k;
}

int main()
{
    int T, i;
    unsigned long long N, temp;
    unsigned long long *A, *B;
    scanf("%d", &T);
    A = calloc(T, sizeof(unsigned long long int));
    B = calloc(T, sizeof(unsigned long long int));
    for (i = 0; i < T; i++)
    {
        scanf("%llu", &N);
        if (N % 2 == 0)
        {
            A[i] = N / 2;
            B[i] = A[i];
            while (nr_of_4(A[i]) != 0 || nr_of_4(B[i]) != 0)
            {
                temp = where_is_4(A[i]);
                A[i] -= pow(10, temp);
                B[i] += pow(10, temp);
            }
        }
        else
        {
            A[i] = (N - 1) / 2;
            B[i] = A[i];
            while (nr_of_4(A[i]) != 0 || nr_of_4(B[i]) != 0)
            {
                temp = where_is_4(A[i]);
                A[i] -= pow(10, temp);
                B[i] += pow(10, temp);
            }
            A[i]++;
            while (nr_of_4(A[i]) != 0 || nr_of_4(B[i]) != 0)
            {
                A[i] -= 1;
                B[i] += 1;
            }
        }
    }
    printf("\n");
    for (i = 0; i < T; i++)
        printf("Case #%d: %llu %llu\n", i + 1, A[i], B[i]);
    return 0;
}