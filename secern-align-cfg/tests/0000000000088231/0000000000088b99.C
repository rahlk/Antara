#include <stdio.h>
#include <string.h>

int main (int argc, char** argv)
{
    int cases;
    scanf("%d\n", &cases);
    while (cases--)
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
        printf("%s ", number);
        while (add[p] == '0') p++;
        for (p = p; p < len; p++)
        {
            putchar(add[p]);
        }
        putchar('\n');
    }

    return 0;
}
