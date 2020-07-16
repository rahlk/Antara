#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        long long int N, n_len, n_temp, length = 0, rem = 0;
        scanf("%lld", &N);
    // Finding length of the number N.
        n_len = N;
        for (int i = 0; n_len != 0; ++i)
        {
            n_len /= 10;
            length++;
        }

        long long int n[length], a[length], A = 0, B = 0;
    // Putting N into n[] array, element-wise.
        n_temp = N;
        for (int i = length-1; i >= 0; --i)
        {
            rem = n_temp % 10;
            n_temp /= 10;
            n[i] = rem;
            /*printf("n_temp = %lld\trem = %lld\n", n_temp, rem);
            for (int j = 0; j < length; ++j)
            {
                printf("n[%d] = %lld\t", j, n[j]);
            }*/
        }
    // Make an array which puts 1 in place of 4, otherwise 0.
        for (int i = 0; i < length; ++i)
        {
            if (n[i] == 4)
                a[i] = 2;
            else
                a[i] = 0;
            /*for (int j = 0; j < length; ++j)
            {
                printf("a[%d] = %lld\t", j, a[j]);
            } printf("\n");*/
        }
    // Converting n1[] into integer.
        for (int i = 0; i < length; ++i)
            A = 10 * A + a[i];
    // Printing the sum of n which doesn't contain 4.
        B = N-A;
        printf("%lld %lld\n", A, B);
    }
    return(0);
}