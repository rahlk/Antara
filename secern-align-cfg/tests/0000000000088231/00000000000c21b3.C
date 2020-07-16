#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, length, first;
    int testSet;
    char number[101]; // 10 ^ 100 + 1
    char a[100][101], b[100][101];

    while (scanf("%d", &testSet) != EOF)
    {
        for (i = 0; i < testSet; i++)
        {
            scanf("%s", number);
            length = strlen(number);
            first = 0;

            for (j = 0; j < length; j++)
            {
                if (number[j] == '4')
                {
                    a[i][j] = '3';
                    b[i][first] = '1';
                    first += 1;
                }
                else if (first == 0)
                {
                    a[i][j] = number[j];
                }
                else
                {
                    // A partir de agora, B precisa ser completado com zero
                    a[i][j] = number[j];
                    b[i][first] = '0';
                    first += 1;
                }
            }

            a[i][j] = '\0';
            b[i][first] = '\0';
        }

        // Saídas
        for (i = 0; i < testSet; i++)
        {
            printf("Case #%d: %s %s\n", i + 1, a[i], b[i]);
        }
    }

    return 0;
}