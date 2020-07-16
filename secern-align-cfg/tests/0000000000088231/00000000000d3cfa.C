#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, t, j;
    unsigned long N[100] = {0}, A[100] = {0}, B[100] = {0}, I = 0;

    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf("%lu", &N[i]);
    }
    for (i = 0; i < t; ++i) {
        I = N[i];
        j = 0;
        while(I) {
            if ((I % 10) == 4){
                B[i] += (unsigned long) (((double) 2) * pow((double) 10, (double) j));
            }
            j++;
            I /= 10;
        }
        A[i] = N[i] - B[i];
    }

    for (i = 0; i < t; ++i) {
        printf("Case #%d: %lu %lu\n", i + 1, A[i], B[i]);
    }

    return 0;
}
