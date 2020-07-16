#include <stdio.h>
#include <math.h>
void main()
{
    long int N, T, i, j, A, B, n, count;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        n = N;
        count = 0;
        while(n > 0)
        {
            n /= 10;
            count++;
        }
        A = N;
        B = 0;
        for(j = count; j > 0; j--)
        {
            if ((N % (int)(pow(10, j)) / (int)pow(10, j-1)) == 4)
            {
                A -= 2*(int)pow(10, j-1);
                B += 2*(int)pow(10, j-1);
            }
        }
        printf("Case #%d: %d %d\n", i+1, A, B);
        fflush(stdout);
    }
}