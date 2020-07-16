#include<stdio.h>
int main()
{
    int test_cases,no,temp=0,quotient,rem,flag=1;
    scanf("%d",&test_cases);
    for(int i=0; i<test_cases; i++)
    {
        scanf("%d",&no);
        // generate the combinations through this loop
        for(int j=1; j<no; j++)
        {
            temp = no - j;
            // now check whether temp contains any digit = 4
            while(temp >= 10)
            {
                quotient = temp / 10;
                rem = temp % 10;
                if(quotient == 4)
                {
                    flag = 0;
                    break;
                }
                else
                {
                    temp = rem;
                    continue;
                }
            }
            if(temp == 4)
            {
                flag = 0;
            }
            if(flag == 1)
            {
                printf("Case #%d: %d %d",i+1,no,no-j);
                break;
            }
        }
    }
    return 0;
}