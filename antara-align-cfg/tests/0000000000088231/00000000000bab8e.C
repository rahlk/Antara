#include <stdio.h>
#include <math.h>

int checkNum(int a);

int main(void) {
	int t = 0, n = 0, a = 0, b = 0;


	scanf("%d", &t);
	getchar();


	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		getchar();
		for (int j = 1; ; j++) {
			a = j;
			b = n - a;
			if (checkNum(a) == 0 && checkNum(b) == 0)
				break;
		}

		printf("Case #%d : %d %d\n", i+1, a, b);
	}
}

int checkNum(int a) {
	int dis = 0, div=0;
	for (int i = 0; ; i++) {
		div = pow(10, i);
		if (a%div == a)
			break;
		if ((a%(div*10))/div == 4) {
			dis = 1;
			break;
		}
	
	}
	return dis;
}