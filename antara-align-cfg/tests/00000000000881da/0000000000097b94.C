#include <stdio.h>
#include <stdlib.h>

int test_case_number, test_case=1, number1;


int path_creater()
{
    char direction;
    number1 = (2*number1)-2;
    printf("Case #%d: ", test_case);
    while (number1--)
    {
        scanf("%c", &direction);
        if (direction == 'E')
        {
            printf("S");
        }
        else if (direction == 'S')
        {
            printf("E");
        }
    }
    printf("\n");
    return 0;
}

int main()
{
    scanf("%d", &test_case_number);
    while(test_case <= test_case_number)
    {
        scanf("%d",&number1);
        path_creater();
        test_case++;
    }
    return 0;
}
