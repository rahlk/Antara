#include<stdio.h>
int checkfour(int part1_check , int part2_check)
{   
    int dig;
    while(part1_check != 0)
    {
        dig = part1_check%10;
        if(dig == 4)
            return 1;
        else
        {
            part1_check /= 10;
        }
    }    
    while(part2_check != 0)
    {
        dig = part2_check%10;
        if(dig == 4)
            return 1;
        else
        {
            part2_check /= 10;
        }
            
    }
    return 0;
}

int main()
{
    int price, part1, part2, flag;
    scanf("%d", &price);
    for(int i = 0; i<(price/2); i++)
    {
        part1 = i;
        part2 = price - i;
        flag = checkfour(part1, part2);
        if(flag == 0)
            break;
    }
    printf("%d\t%d", part1, part2);
    
}