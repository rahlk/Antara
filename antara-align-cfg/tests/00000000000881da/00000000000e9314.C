#include <stdio.c>

int main()
{
    int num_cases;
    scanf("%i", &num_cases);
    for (int i = 0; i < num_cases; i++)
    {
        int dimension;
        scanf("%i", &dimension);
        dimension += 1;
        char way[2 * dimension - 2];
        scanf("%s", way);
        printf("Case #%i: ", i + 1)
        for (int j = 0; j < 2 * dimension - 2; j++)
        {
            if (way[i] == 'S')
                printf("%c", 'E')
            else
                printf("%c", 'S');
        }
        printf('\n');
    }
    return 0;
}