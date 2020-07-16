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
    int num, digit = 1, j=0,temp = 0,builden = 0;
    scanf("%d",&num);
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
    builden /=10;
    temp /=10;
    printf("%d %d", builden, temp);
    return 0;
}
