#include <stdio.h>
#include <stdlib.h>

int test_case_number, test_case=1, number1;


int path_creater()
{
    scanf("%d ",&number1);
    int i = 0;
    char a[50000];
    gets(a);
    number1 = (2*number1)-2;
    printf("Case #%d: ", test_case);
    while (i<number1)
    {
        if (a[i] == 'E')
        {
            printf("S");
        }
        else if (a[i] == 'S')
        {
            printf("E");
        }
        i++;
    }
    printf("\n");
    return 0;
}

int main()
{
    scanf("%d", &test_case_number);
    while(test_case <= test_case_number)
    {
        path_creater();
        test_case++;
    }
    return 0;
}
