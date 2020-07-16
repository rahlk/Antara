#include <stdio.h>;
#include <stdlib.h>;

int main() {
    int number_of_cases;
    scanf("%d", &number_of_cases);

    for (int case_i = 1; case_i <= number_of_cases; case_i++)
    {
        int n; // Size
        scanf("%d", &n);
        int number_moves = 2 * n - 2;
        char path_lydia[number_moves + 1]; // +1 for \0 string termination?
        scanf("%s", &path_lydia);

        // char path = opposite(path_lydia);

        printf("Case #%d: ", case_i);

        for (int i = 0; i <= number_moves; i++)
        {
            if (path_lydia[i] == 'E')
            {
                printf("S");
            }
            else if (path_lydia[i] == 'S')
            {
                printf("E");
            }
            else // End of path
            {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}