#include <stdio.h>

void func(int n, int *arr) {  // arr[0] = 자리수  arr[1]~ = 일의 자리부터 순서대로
	int num = 0;
	while (n != 0) {
		arr[1+(num++)] = n % 10;
		n = n / 10;
	}
	arr[0] = num+1;
	
}


int main() {
	int T; // test case
	int arrA[15] = { 0 };
	int arrB[15] = { 0 };
	scanf("%d", &T);
	
	
	for (int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		int A = 1;
		int B = N - A;
		
		while (1) {
			int flag = 0;
			func(A, arrA);
			func(B, arrB);
			for (int k = 0; k < arrA[0]; k++) {
				if (arrA[k] == 4)
					flag = 1;
			}
			for (int k = 0; k < arrB[0]; k++) {
				if (arrB[k] == 4)
					flag = 1;
			}
			if (flag == 0)
				break;

			A++;
			B--;
		}
		printf("Case #%d: %d %d\n", i + 1, A, B);
	}



	return 0;
}