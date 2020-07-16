#include<stdio.h>
int checkDiv(int num)
{
	int num1;
    while(num)
    {
        num1 = num % 10;
        if(num1 == 4)
            return 0;
        num = num / 10;
    }
    return 1;
}
int main()
{
    int i;
    double N,T,j,k;
    scanf("%d",&T);
    for(i = 0; i < T; i++)
    {
        scanf("%lf",&N);
        for(j =N ; j>= N/2; j--)
        {
            if(checkDiv(j))
            {
                k = N - j;
                if(checkDiv(k))
                {
                    printf("Case #%d: %.0lf %.0lf\n",i,j,k);
                    break;
                }
            }
        }
    }
}