#include <stdio.h>

int main()
{
    int N, num;
	scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &num);
        int num1 = num, num2 = 0;
        int power = 1;
        while(num > 0)
        {
            if(num%10 == 4)
            {
            	num2 += power;
                num1 -= power;
            }
            num /= 10;
            power*=10;
        }
        
        printf("Case #%d: %d %d\n", i, num1, num2);
    }
    return 0;
}