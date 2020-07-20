#include<stdio.h>
extern unsigned char found_four(unsigned int data);
int main()
{
	unsigned int test_case,i,total_jamcoins,A,B;
	unsigned char success;
	scanf("%u", &test_case);
	for (i = 1; i <= test_case; i++)
	{
		scanf("%u", &total_jamcoins);
		for (A = 1; A < total_jamcoins; A++)
		{
			success = found_four(A);
			if (success == (unsigned int)0)
			{
				B = total_jamcoins - A;
				success = found_four(B);
				if (success == (unsigned int)0)
				{
					break;
				}
			}
		}
		printf("Case #%u: %u %u\n",i,A,B);
	}
	return (int)0;
}

extern unsigned char found_four(unsigned int data)
{
	unsigned char mod, success = 0;
	unsigned int tmp_data;
	tmp_data = data;
	while (tmp_data > 0)
	{
		mod = tmp_data % 10;

		if (mod == 4)
		{
			success = 1;
			break;
		}

		tmp_data = tmp_data / 10;
	}
	return success;
}