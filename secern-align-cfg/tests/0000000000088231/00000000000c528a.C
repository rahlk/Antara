#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void)
{
    int EnterNumber;
    int TestCases;
    int TestNo;
    int Remainder;
    int Quotient;
    scanf("%d",&TestCases);
    for (TestNo = 1; TestNo <= TestCases; TestNo++)
    {
        int B = 0;
        int C;
        int n = 0;
        scanf("%d",&EnterNumber);
        Remainder = EnterNumber % 10;
        Quotient = EnterNumber / 10;

        if (Remainder == 4)
        {
            B = B + (3 * pow(10, n));
        }
        else
        {
            B = B + 0;
        }

        while (Quotient != 0)
        {
            Remainder = Quotient % 10;
            Quotient = Quotient / 10;
            n++;
            if (Remainder == 4)
            {
                B = B + (3 * pow(10, n));
            }
            else
            {
                B = B + 0;
            }
        }

        C = EnterNumber - B;
        printf("Case #%d: %d %d",TestNo,B,C);
    }
    return 0;
}