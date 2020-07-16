#include <stdio.h>

int ppow(int poww)
{
    int x = 10;
    for (int i = 0; i < poww; i++)
    {
        x *= 10;
    }
    return x;
}
int main()
{
    int num, digit, j, temp , builden, count;
    scanf("%d\n", &count);

    count = 1;
    while (scanf("%d", &num) != EOF)
    {   
        digit = 1, j = 0, temp = 0, builden = 0, count = 0;
        while (num != 0)
        {
            digit = num % 10;
            num = num / 10;
            if (digit == 4)
            {
                digit -= 1;
                temp += (ppow(j));
            }

            builden += digit * (ppow(j));
            j++;
        }
        builden /= 10;
        temp /= 10;
        printf("Case #%d %d %d\n", count, builden, temp);
        count++;
    }
    return 0;
}
