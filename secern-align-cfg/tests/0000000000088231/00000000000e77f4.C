#include <stdio.h>

int expon(sign)
{
    int res = 1;
    for (int i = 0; i < sign; i++)
    {
        res *= 10;
    }
    return res;
}

int main()
{
    int num_cases;
    scanf("%i", &num_cases);
    int cases1[num_cases];
    int cases2[num_cases];
    for (int j = 0; j < num_cases; j++)
    {
        int temp;
        scanf("%i", &temp);
        int a = 0;
        int b = 0;
        int i = 0;
        while (temp/expon(i) != 0)
        {
            int temporary;
            temporary = temp % expon(i + 1) / expon(i);
            if (temporary == 4)
            {
                a += expon(i);
                b += 3 * expon(i);
            } else
            {
                a += temporary * expon(i);
            }
            cases1[j] = a;
            cases2[j] = b;
            i++;
        }
    }
    for (int i = 0; i < num_cases; i++)
    {
        printf("Case #%i: %i %i\n", i + 1, cases1[i], cases2[i]);
    }
    return 0;
}