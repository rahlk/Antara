#include <stdio.h>
#include <stdlib.h>

#define MAXL 1000
#define ALPHABET_CNT 26


//#define MAX_BIG_ARR (100)
//#define MAX_BIGNUMBER_ITEM	(10000)
//
//// BIGNUMBER
//typedef struct {
//	int number[MAX_BIG_ARR];
//	unsigned char count;
//	char sign;		// 1 == +, -1 == -
//}stBigNum;
//
//void jwBigNum_init(stBigNum *a)
//{
//	memset(a, 0, sizeof(stBigNum));
//	a->sign = 1;
//}
//
//int jwBigNum_compare(stBigNum *a, stBigNum *b)
//{
//	int ret = 0;
//	int largeCount = 0;
//	int i;
//
//	if (a->sign > 0 && b->sign < 0)
//		return 1;
//	if (a->sign < 0 && b->sign > 0)
//		return -1;
//
//	largeCount = (a->count > b->count) ? a->count : b->count;
//	for (i = largeCount - 1; i >= 0 && ret == 0; i--)
//	{
//		ret = a->number[i] - b->number[i];
//	}
//	if (ret == 0)
//		return 0;
//	if (a->sign > 0 && b->sign > 0)
//	{
//		if (ret > 0)
//			return 1;
//		else
//			return -1;
//	}
//	else
//	{
//		if (ret > 0)
//			return -1;
//		else
//			return 1;
//	}
//}
//
//stBigNum jwBigNum_sum(stBigNum *a, stBigNum *b)
//{
//	stBigNum result;
//	int i;
//
//	jwBigNum_init(&result);
//	if (a->sign != b->sign)
//	{
//		// minus
//		for (i = 0; i < a->count || i < b->count; i++)
//		{
//			result.number[i] += a->number[i] - b->number[i];
//			if (result.number[i] < 0)
//			{
//				result.number[i] + MAX_BIGNUMBER_ITEM;
//				result.number[i + 1]--;
//			}
//		}
//	}
//	else
//	{
//		for (i = 0; i < a->count || i < b->count; i++)
//		{
//			result.number[i] += a->number[i] + b->number[i];
//			result.number[i + 1] = result.number[i] / MAX_BIGNUMBER_ITEM;
//			result.number[i] = result.number[i] / MAX_BIGNUMBER_ITEM;
//		}
//		result.sign = a->sign;
//	}
//
//	return result;
//}
//
//stBigNum jwBigNum_minus(stBigNum *a, stBigNum *b)
//{
//
//}
//
//
//
//stBigNum jwBigNum_multiple(stBigNum *a, stBigNum *b)
//{
//
//}
//
//stBigNum jwBigNum_divide(stBigNum *a, stBigNum *b)
//{
//
//}
//
//stBigNum jwBigNum_remain(stBigNum *a, stBigNum *b)
//{
//
//}

unsigned int getSubmultiple(unsigned int n)
{
	unsigned int i;


	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			return i;
	}
	return 1;
}

int findNfromArray(unsigned int arr[], int size, unsigned int n)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == n)
			return i;
	}
	return -1;
}

int main(void)
{
	int T, testcase;
	int N, L;
	unsigned int pangrams[MAXL];
	unsigned int subPangrams[MAXL + 1];
	unsigned int crypto[ALPHABET_CNT];
	unsigned int a, b;

	scanf("%d", &T);
	for (testcase = 0; testcase < T; testcase++)
	{
		int i, j;
		unsigned int tmp = 0;
		char testInput[256];
		for (i = 0; i < ALPHABET_CNT; i++)
		{
			crypto[i] = 0;
		}

		scanf("%d %d", &N, &L);
		for (i = 0; i < L; i++)
		{
			scanf("%s", testInput);
			pangrams[i] = atoi(testInput);
		}

		// set first four pangrams
		a = getSubmultiple(pangrams[0]);
		b = pangrams[0] / a;

		if (pangrams[1] % a == 0)
		{
			subPangrams[0] = b;
			subPangrams[1] = a;
		}
		else
		{
			subPangrams[0] = a;
			subPangrams[1] = b;
		}

		for (i = 2; i <= L; i++)
		{
			if (subPangrams[i - 1] > 0)
			{
				subPangrams[i] = pangrams[i - 1] / subPangrams[i - 1];
			}
			else
			{
				subPangrams[i] = 1; //?????
			}
		}
		for (i = 0; i <= L; i++)
		{
			for (j = 0; j < ALPHABET_CNT; j++)
			{
				if (crypto[j] == 0)
				{
					crypto[j] = subPangrams[i];
					break;
				}
				else if (crypto[j] == subPangrams[i])
				{
					break;
				}
			}
			if (j == ALPHABET_CNT) // All Alphabet Finded
				break;
		}

		// sort Crypto
		for (i = 0; i < ALPHABET_CNT - 1; i++)
		{
			for (j = i + 1; j < ALPHABET_CNT; j++)
			{
				if (crypto[i] > crypto[j])
				{
					tmp = crypto[i];
					crypto[i] = crypto[j];
					crypto[j] = tmp;
				}
			}
		}

		printf("Case #%d: ", testcase + 1);
		for (i = 0; i <= L; i++)
		{
			printf("%c", 'A' + findNfromArray(crypto, ALPHABET_CNT, subPangrams[i]));
		}
		printf("\n");

	}

	return 0;
}