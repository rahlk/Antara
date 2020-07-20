#include <stdio.h>
#include <string.h>
#include <math.h>

int myfunct(int a, int *num1, int *num2 )
{
    int acopy = a;
    int digit,poweroften=0;
    while( acopy!=0 )
    {

        digit = acopy%10;
        if(digit ==4)
        {
            *num1 = *num1 + pow(10,poweroften)*3;
            *num2 = *num2 + pow(10,poweroften)*1;
        }


        poweroften++;  acopy=acopy/10;
    }
}


int main()
{
    int i,tc,arr[100000],num1=0,num2=0;

    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&arr[i]);

        myfunct(arr[i], &num1 ,&num2);
    
        printf("Case #%d: %d %d\n", i, num1 ,num2);
    }

    return 0;
}
