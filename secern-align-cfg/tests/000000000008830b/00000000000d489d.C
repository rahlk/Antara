#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int PrimeNumber2[26] = { 2, 89, 109, 211, 239, 353, 479, 601, 701, 827, 883, 1021, 1051, 1087, 1277, 1381, 1531, 1571, 1669, 1861, 1973, 1997, 2137, 2213, 2281, 2411 };
char Alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main()
{
	int InputCnt = 0;
	int StrCnt = 0;
	int MaxPM = 0;
	int j = 0;
//	int code[100] = { 0, };

	int num = 0;
	int num2 = 0;

	int Now_Index = 0;
	int Next_Index = 0;

	int num3 = 0;

	char code[100][10] = { 0, };
	char Result[100] = { 0, };

	scanf("%d", &InputCnt);

	for (int i = 0; i < InputCnt; i++)
	{
		scanf("%d %d", &MaxPM, &StrCnt);
		
		for (int aa = 0; aa < StrCnt; aa++)
		{
			scanf("%s", code[aa]);
		}

		for (int aa = 0; aa < StrCnt; aa++)
		{
			num = atoi(code[aa]);

			if (aa == 0)
			{
				for (int q = 0; q < 26; q++)
				{
					if ((num % PrimeNumber2[q]) == 0)
					{
						num2 = q;

						for (int w = q + 1; w < 26; w++)
						{
							if (PrimeNumber2[w] != PrimeNumber2[num2] && num / PrimeNumber2[num2] == PrimeNumber2[w])
				//			if (num % PrimeNumber2[w] == 0)
							{
								num3 = w;

								if (atoi(code[aa + 1]) % PrimeNumber2[num2] == 0)
								{
									Now_Index = num3;
									Next_Index = num2;

									Result[aa] = 0x41 + Now_Index; //PrimeNumber2[Now_Index];
									Result[aa + 1] = 0x41 + Next_Index;
									break;
						//			Now_Index = Next_Index;
								}
								else if (atoi(code[aa + 1]) % PrimeNumber2[num3] == 0)
								{
									Now_Index = num2;
									Next_Index = num3;

									Result[aa] = 0x41 + Now_Index; //PrimeNumber2[Now_Index];
									Result[aa + 1] = 0x41 + Next_Index;
									break;
									
								}
							}
						}
						break;
					}
				}
			}

			else
			{
				Now_Index = Next_Index;

				for (int e = 0; e < 26; e++)
				{
					if (PrimeNumber2[e] != PrimeNumber2[Now_Index] && num / PrimeNumber2[Now_Index] == PrimeNumber2[e])
					{
						Next_Index = e;
						Result[aa + 1] = 0x41 + e;//PrimeNumber2[Now_Index];
					}
				}
			}
		}
		printf("Case #%d: %s", i + 1, Result);
	}
	return 0;
}