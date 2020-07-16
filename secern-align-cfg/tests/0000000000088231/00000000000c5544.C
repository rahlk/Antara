#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	int case_num;
	scanf("%d", &case_num);
	int i;
	for (i = 0; i < case_num; i++){
		int N, finished;
		scanf("%d", &N);
		int num1, num2;
		num1 = 1;
		num2 = N - 1;
		finished = 0;
		while(finished == 0){
			char arr[10] = "";
			snprintf(arr, sizeof(arr), "%d", num1);
			int len = strlen(arr);
			finished = 1;
			for (int j = 0; j < len; j++)
			{
				if (arr[j] == '4')
				{
					finished = 0;
				}
			}
			memset(arr, 0, 10);
			snprintf(arr, sizeof(arr), "%d", num2);
			len = strlen(arr);
			for (int j = 0; j < len; j++)
			{
				if (arr[j] == '4')
				{
					if (arr[j])
					{
						finished = 0;
					}
				}
			}
			if (finished == 0)
			{
				num1 += 1;
				num2 -= 1;
			}
		}
		printf("Case #%d: %d %d\n", i, num1, num2);

	}

	return 0;
}