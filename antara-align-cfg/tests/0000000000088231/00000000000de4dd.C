
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t, tt;
    scanf("%d", &t);

    for (tt = 1; tt <= t; tt++)
    {
        int temp, i = 0, pot, a = 0, b = 0, j, n, *arr, *arr2, k = 0, g = 0;
        int temp2 = 0;
        scanf("%d", &n);
        a = n / 2;
        temp = a;
        while (a)
        {
            i++;
            a = a / 10;
        }
        arr = calloc(i, sizeof(int));
        arr2 = calloc(i, sizeof(int));
        a = temp;
        j = i;
        while (i)
        {
            pot = pow(10, i - 1);
            temp2 = a / pot;
            a = a - (pot * temp2);
            arr[i - 1] = temp2;
            arr2[i - 1] = temp2;
            i--;
        }
        for (i = 0; i < j; i++)
        {
            if (arr[i] == 4)
            {
                arr[i]++;
                arr2[i]--;
                //printf("%c %c \n",arr[i],arr2[i]);
            }
        }
        a = 0;
        for (i = j-1; i >= 0; i--)
        {
            a = 10 * a + arr[i];
            b = 10 * b + arr2[i];
        }
        if (a+b < n)
            a++;
        else
            b--;
        printf("Case %d: %d %d\n", tt, a, b);
        free(arr);
        free(arr2);
    }

    return 0;
}