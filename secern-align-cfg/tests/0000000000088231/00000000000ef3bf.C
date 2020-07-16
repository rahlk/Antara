#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    char number[101];
    char string[101];
    int cases;

    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        scanf("%s", number);
        int i = 0;
        while (number[i])
        {
            if (number[i] == '4')
            {
                number[i] = '2';
                string[i] = '2';
            }
            else
                string[i] = '0';
            i++;
        }
        string[i]= '\0';
       i = 0;
       while (string[i] == '0')
            i++;
        if (string[i] != '\0')
            printf("%s %s\n", number, string+i);
    }
    return 0;
}