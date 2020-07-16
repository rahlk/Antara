#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

long long int arr[105];
long long int factor[55];

int compare(const void * first, const void * second) {
	long long int a = *((long long int *)first);
	long long int b = *((long long int *)second);

	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}

int check(long long f, int idx) {
	int i;

	for (i = 0; i <= idx; i++) {
		if (factor[i] == f)
			return 0;
	}

	return 1;
}

int main(void) {
	int t, T;
	int i,j;
	char N[105];
	int L;
	int idx;
	long long temp;
	int flag;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		idx = 0;
		scanf("%s", N);
		scanf("%d", &L);
		memset(factor, 2, sizeof(factor));

		for (i = 1; i <= L; i++) {
			scanf("%lld", &arr[i]);
		}

		

		for (i = 1; i < L; i++) {
			if (arr[i + 1] == arr[i])
				continue;
			flag = 0;

			for (j = 0; j < idx; j++) {
				if (factor[j] <= 2)
					break;

				if (arr[i] % factor[j] == 0 && arr[i + 1] % factor[j] == 0) {
					if (check(arr[i] / factor[j], idx))
						factor[idx++] = arr[i] / factor[j];

					if (check(arr[i + 1] / factor[j], idx))
						factor[idx++] = arr[i + 1] / factor[j];

					flag = 1;
					break;
				}
				else if (arr[i] % factor[j] == 0) {
					if (check(arr[i] / factor[j], idx))
						factor[idx++] = arr[i] / factor[j];

					if (arr[i+1] % factor[idx-1] == 0 && check(arr[i+1] / factor[idx-1], idx))
						factor[idx++] = arr[i + 1] / factor[idx - 1];

					flag = 1;
					break;
				}
				else if (arr[i + 1] % factor[j] == 0) {
					if (check(arr[i+1] / factor[j], idx))
						factor[idx++] = arr[i+1] / factor[j];

					if (arr[i] % factor[idx - 1] && check(arr[i] / factor[idx - 1], idx))
						factor[idx++] = arr[i] / factor[idx - 1];

					flag = 1;
					break;
				}
			}

			if (flag == 0) {
				if(arr[i] > arr[i+1])
					temp = gcd(arr[i], arr[i + 1]);
				else
					temp = gcd(arr[i+1], arr[i]);

				if (temp == 1)
					continue;

				if(check(temp,idx))
					factor[idx++] = temp;

				if(arr[i] % temp == 0 && check(arr[i] / temp, idx))
					factor[idx++] = arr[i] / temp;

				if(arr[i+1] % temp == 0 && check(arr[i+1] / temp, idx))
					factor[idx++] = arr[i + 1] / temp;
			}

		}

	

		qsort(factor, idx, sizeof(long long int), compare);

		printf("Case #%d: ", t);

		for (i = 1; i <= L; i++) {
			if (i == L) {
				for (j = 0; j < idx; j++) {
					if (arr[i] % factor[j] == 0 && arr[i - 1] % factor[j] == 0) {
						printf("%c", 'A' + j);
						break;
					}
				}

				for (j = 0; j < idx; j++) {
					if (arr[i] % factor[j] == 0 && arr[i - 1] % factor[j] != 0) {
						printf("%c", 'A' + j);
						break;
					}
				}

				break;
			}

			for (j = 0; j < idx; j++) {
				if (arr[i] % factor[j] == 0 && arr[i + 1] % factor[j] != 0) {
					printf("%c", 'A' + j);
					break;
				}
			}
		}

		printf("\n");
	}
}