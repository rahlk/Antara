#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;	//test cases
	int W;	//number of times I can ask
	int day0, day1, day2, day3, day4, day5;
	int val1, val2, val3, val4, val5, val6;
	int judge;

	scanf("%d", &T);
	scanf("%d", &W);

	for (int i = 1; i <= T; i++) {
		printf("0");
		fflush(stdout);
		scanf("%d", &day0);
		printf("1");
		fflush(stdout);
		scanf("%d", &day1);
		printf("2");
		fflush(stdout);
		scanf("%d", &day2);
		printf("3");
		fflush(stdout);
		scanf("%d", &day3);
		printf("4");
		fflush(stdout);
		scanf("%d", &day4);
		printf("5");
		fflush(stdout);
		scanf("%d", &day5);

		val1 = day1 - day0;
		val2 = day2 - day1 - (2 * val1);
		val3 = day3 - day2 - (4 * val1);
		val4 = day4 - day3 - (2 * val2) - (8 * val1);
		val5 = day5 - day4 - (16 * val1);
		val6 = day0 - val1 - val2 - val3 - val4 - val5;
		
		printf("%d %d %d %d %d %d\n", val1, val2, val3, val4, val5, val6);
		fflush(stdout);
		scanf("%d", &judge);
		if (judge == -1)
			return -1;
	}

	return 0;
}