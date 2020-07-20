#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

	int case_num;
	scanf("%d", &case_num);
	int i;
	for (i = 0; i < case_num; i++){
		int N;
		scanf("%d", &N);
		char arr[100000];
		int count = 0;
		char input;
		scanf("%c", &input);
		while(1){
			scanf("%c", &input);
			if (input == '\n')
			{
				break;
			}
			if (input == 'E')
			{
				arr[count] = 'S';
			}
			else if (input == 'S')
			{
				arr[count] = 'E';
			}
			count++;
		}
		printf("Case #%d: %s\n", i + 1, arr);
	}

	return 0;
}