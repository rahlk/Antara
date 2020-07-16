#include <stdio.h>

int checkPresence(int a)
{
	while(a != 0)
	{
		if(a%10 == 4)
		{
			return 0;
		}
		a /= 10;
	}
	return 1;
}

int main()
{
	int testCases;
	scanf("%d",&testCases);
	for(int i=1 ; i<=testCases ; i++)
	{
		int number;
		scanf("%d",&number);
		int number1 = number/2 + number%2 , number2 = number/2;
		while(number2 > 0)
		{
			if(checkPresence(number1) && checkPresence(number2))
			{
				printf("Case #%d: %d %d\n",i,number1,number2);
				break;
			}
			else
			{
				number1++;
				number2--;
			}
		}
	}
	return 0;
}