#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

	int case_num;
	scanf("%d", &case_num);
	int i;
	for (i = 0; i < case_num; i++){
		int N, finished;
		scanf("%d", &N);
		int num1, num2;
		char arr[10] = "";
		snprintf(arr, sizeof(arr), "%d", N);
		int len = strlen(arr);
		num1 = N;
		num2 = 0;
		int power = 0;
		for (int j = 0; j < len; j++)
		{
			if (arr[j] == '4')
			{
				power = len - j - 1;
				num2 += pow(10, power);
				num1 -= pow(10, power);
			}
		}
		memset(arr, 0, 10);
		printf("Case #%d: %d %d\n", i+1, num1, num2);

	}

	return 0;
}