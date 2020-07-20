#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int i = 0;
	unsigned int InputNum = 0;
	unsigned int A = 0;
	unsigned int B = 0;
	int TotalCnt = 0;

	for (unsigned int InputNum = 1; InputNum < pow(10, 5); InputNum++)
	{
		unsigned int CalAnd = InputNum & 0x24924924;

		if (CalAnd != 0)
		{
			unsigned char str[20] = { 0, };	
			unsigned int nFourCnt = 0;
			unsigned int TempInputNum = InputNum;
			i = 0;
			A = 0;
			B = 0;

			if (TempInputNum >= 10)
			{
				for (TempInputNum; TempInputNum >= 10;)
				{
					if (TempInputNum % 10 == 4)
					{
						str[i] = 1;
						nFourCnt++;
					}
					else
					{
						str[i] = 0;
					}
					TempInputNum = TempInputNum / 10;
					i++;
				}
			}
			if (TempInputNum < 10)
			{
				if (TempInputNum == 4)
				{
					str[i] = 1;
					nFourCnt++;
				}
				else
				{
					str[i] = 0;
				}
			}

			if (nFourCnt != 0)
			{
				TempInputNum = InputNum;
				for (int j = i; j >= 0; j--)
				{
					if (str[i - j] == 1)
					{
						A += (((TempInputNum % 10) - 1) * (int)pow(10, i - j));
						B += (1 * (int)pow(10, i - j));
						TempInputNum = TempInputNum / 10;
					}
					else
					{
						A += (((TempInputNum % 10)) * (int)pow(10, i - j));
						TempInputNum = TempInputNum / 10;
					}
				}
				printf("Case #%d: %d %d \n", TotalCnt, A, B);
				TotalCnt++;
			}
		}
	}
	return 0;
}
