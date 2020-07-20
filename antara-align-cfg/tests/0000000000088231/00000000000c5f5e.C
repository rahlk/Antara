#include<stdio.h>
#include<stdlib.h>

int check(int number)
{
    int s = number;
    while(number != 0)
    {
        int d = number % 10;
        number = number / 10;
        if(d == 4)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int testcases;
    scanf("%d" , &testcases);

    while(testcases != 0)
    {
        int num;
        scanf("%d" , &num);
        
        int i = num-1;
        int flag = 0;
        while(i > 0)
        {
            flag = check(i);
            if(flag == 1)
                continue;
            flag = check(num - i);
            if(flag == 1)
                continue;
            printf("Case #1: %d %d", i, num - i);
            printf("\n");
            i--;
            break;
        }
        testcases--;
    }
}

