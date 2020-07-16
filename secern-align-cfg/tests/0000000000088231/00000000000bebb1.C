#include<stdio.h>

char arr_A[12];
char arr_B[12];

int mindex = 0;
int flag = 0;
int digit_loc = 0;

void init()
{
	mindex = 0;
	flag = 0;
	digit_loc = 0;
}

int my_atoi(char *arr, int loc)
{
	int base = 1, i =0;
	int num = 0;
	while (i<loc)
	{
		num = (arr[i] - '0')*base + num;
		base = base * 10;
		i++;
	}
	return num;
}
int main()
{
	int T, test_case, i;
	int N, a, b, rem;
	scanf("%d", &T);
	for (test_case = 1; test_case <= T; test_case++)
	{
		init();
		scanf("%d", &N);
		while (N)
		{
			rem = N % 10;
			N = N / 10;
			if (rem == 4)
			{
				flag = 1;
				digit_loc = mindex;
				arr_A[mindex] = '2';
				arr_B[mindex] = '2';
				mindex++;
			} else { 
				arr_A[mindex] = rem + '0';
				arr_B[mindex] = '0';
				mindex++;
			}
		}
		if (flag)
		{
			a = my_atoi(arr_A, mindex);
			b = my_atoi(arr_B, digit_loc + 1);
			printf("Case #%d: %d %d\n", test_case, a, b);
		}
		else {
			a = N;
			b = 0;
			printf("Case #%d: %d %d\n", test_case, a, b);
		}
	}
	
}