#include<stdio.h>
#include<string.h>
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	char N[100];
	char a[100];
	char b[100];
	int j;
	int i;

	for (i = 0; i < testcase; i++) {
		int count = 0;

		for (j = 0; j < 100; j++) {
			a[j] = '.';
		}
		scanf("%s", N);
		for (j = 0; j <strlen(N); j++) {
			if (N[j] == '4') {
				a[j] = '1'; 
				N[j] = '3';
			}
			else a[j] = '0';
		}
		a[j] = '\0';
		int temp = -1;
		for (j = 0; j < strlen(a); j++) {
			if (a[j] == '0') {
				temp = j;
			}
			else break;
		}
		for (j = temp+1; j < 100; j++) {
			if (a[j] != '.') {
				b[count] = a[j];
				count++;
			}
			else break;
		}
		b[count+1] = '\0';
		printf("Case #%d: %s %s\n", i+1, N, b);
	}
}