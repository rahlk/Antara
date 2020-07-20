#include <stdio.h>
#include <string.h>
int main(void) {
	char input[103] = { 0 };
	char A[103] = { 0 };
	char B[103] = { 0 };
	int T = 0;
	scanf("%d", &T);
	for (int i = 0; i< T; i++) {
		scanf("%s", input);
		int len = strlen(input);
		int j;
		for (j = 0; j<len; j++) {
			if (input[j] == '4') {
				A[j] = '1';
				B[j] = '3';
			}
			else {
				A[j] = input[j];
				B[j] = '0';
			}
		}
		char * ptr = B;
		while (*ptr++ == '0') {}
		A[j] = 0;
		B[j] = 0;
		printf("Case #%d: %s %s\n",i+1, A, ptr-1);
	}
	return 0;
}