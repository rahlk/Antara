#include<stdio.h>
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	char A[50001];
	char B[50001];
	int i,j;
	int num;
	for (i = 0; i < testcase; i++) {
		scanf("%d", &num);
		scanf("%s", A);
		for (j = 0; j < 2*num-2; j++) {
			if (A[j] == 'E') B[j] = 'S';
			else if (A[j] == 'S')B[j] = 'E';
		}
		B[2*num-2] = '\0';
		printf("Case #%d: %s\n", i + 1, B);
	}

}