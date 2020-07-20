#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int NumCases, MaxTries = 0;
	scanf("%d %d", &NumCases, &MaxTries);
	for (int Case = 1; Case <= NumCases; ++Case) {
		printf("54\n");
		long Total1;
		scanf("%ld", &Total1);
		long R1 = Total1 >> 54;
		Total1 -= R1 << 54;
		long R2 = Total1 >> 27;
		Total1 -= R2 << 27;
		printf("210\n");
		long Total2;
		scanf("%ld", &Total2);
		long R4 = Total2 >> 52;
		Total2 -= R4 << 52;
		long R5 = Total2 >> 42;
		Total2 -= R5 << 42;
		long R6 = Total2 >> 35;
		long R3 = (Total1 - (R4 << 13) - (R5 << 10) - (R6 << 9)) >> 18;
		printf("%ld %ld %ld %ld %ld %ld\n", R1, R2, R3, R4, R5, R6);
		int Result;
		scanf("%d", &Result);
	}
	return 0;
}
