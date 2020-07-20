// test1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int cases, index_cases, i, j;
int numdig, numdig2;
int num1[100], num2[100];
char numread[102];
FILE* stream,stream2;


int main()
{

//		freopen_s(&stream,"A-small-attempt1.in", "rt", stdin);
//		freopen_s(&stream,"A-small-attempt1.out", "wt", stdout);

	cases = 0;
	//read the number of test cases 
	scanf("%d", &cases);
//	printf("Cases = %d\n",cases);

	for (index_cases = 0; index_cases < cases; index_cases++)
	{
		scanf("%s", numread);
//		scanf_s("%101s", numread, (unsigned)_countof(numread));
//		printf("numero = %s\n", numread);
		numdig = strlen(numread);

		for (i = numdig - 1, j = 0; i >= 0; i--, j++)
		{
			if (numread[i] == '4')
			{
				num1[j] = 3;
				num2[j] = 1;
				numdig2 = j + 1;
			}
			else
			{
			num1[j] = numread[i] - '0';
			num2[j] = 0;
			}

		}

		printf("Case #%d: ", index_cases + 1);


		for (i = numdig - 1; i >= 0; i--)
		{
			printf("%d", num1[i]);
		}
		printf(" ");
		for (i = numdig2 - 1; i >= 0; i--)
		{
			printf("%d", num2[i]);
		}

		printf("\n");

	}//end case
} //end 

