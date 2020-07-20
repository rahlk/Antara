#include <stdio.h>
#include <string.h>

int main (int argc, char** argv)
{
    int cases, c;
    scanf("%d\n", &cases);
    for (c = 1; c <= cases; c++)
    {
        char number[128];
        scanf("%s", number);
        size_t len = strlen(number);
        char add[len];
        int i;
        for (i = 0; i < len; i++)
        {
            if (number[i] == '4')
            {
                number[i] = '3';
                add[i] = '1';
            }
            else
                add[i] = '0';
        } 
        int p = 0;
        printf("Case #%d: %s ", c, number);
        while (add[p] == '0') p++;
        for (p = p; p < len; p++)
        {
            putchar(add[p]);
        }
        putchar('\n');
    }

    return 0;
}
