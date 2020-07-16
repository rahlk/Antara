#include <stdio.h>


int main() {
	int numJab;
	int testcase;
	scanf("%d",&testcase);
	//getc(stdin);

	for (int i = 0; i < testcase; i++) {
		scanf("%d", &numJab);
		int a = numJab;
		int b = 0;
		for (int k = 1; numJab!=0; k*=10) {
			if (numJab%10 == 4) {
				a -= 2*k;
				b += 2*k;
			}
			numJab/=10;
		}
		printf("Case #%d: %d %d\n", i+1, a, b);
	}



}