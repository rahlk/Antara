#include <stdio.h>
#include <math.h>

int N;

typedef struct _mole {
	int c;
	int j;
}Mole;

Mole arr[305];

double Abs(double a) {
	if (a < 0)
		return -1 * a;
	else
		return a;
}

double Max(double a, double b) {
	if (a > b)
		return a;
	else
		return b;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main(void) {
	int t, T;
	int i;
	int j;
	int ans;
	int flag;
	int ans_c, ans_j;
	double k1, k2;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		ans = 1;
		k1 = k2 = 0;
		scanf("%d", &N);

		for (i = 1; i <= N; i++)
			scanf("%d%d", &arr[i].c, &arr[i].j);

		flag = 0;
		for (i = 1; i < N; i++) {
			j = i + 1;

			if ((arr[i].c <= arr[j].c && arr[i].j <= arr[j].j))
				continue;

			if (arr[i].c >= arr[j].c && arr[i].j >= arr[j].j) {
				flag = 1;
				break;
			}

			double a = arr[j].c - arr[i].c;
			double b = arr[i].j - arr[j].j; 

			if (a > 0) {
				k1 = Max(k1, b / a);
			}
			else {
				k2 = Max(k2, Abs(a / b));
			}
		}

		if (k1 != 0 && k2 != 0 && (1 / k1 >= k2 || 1/k2 >= k1))
			flag = 1;
		
		if(flag)
			printf("Case #%d: IMPOSSIBLE\n", t);
		else {
			ans_j = floor(k2 + 1);
			ans_c = floor(k1*ans_j + 1);

			int tmp_j, tmp_c;
			tmp_c = floor(k1 + 1);
			tmp_j = floor(k2*ans_c + 1);

			if (ans_c > tmp_c || (ans_c == tmp_c && ans_j > tmp_j)) {
				ans_c = tmp_c;
				ans_j = tmp_j;
			}

			printf("Case #%d: %d %d\n", t, ans_c, ans_j);
		}
	}
}