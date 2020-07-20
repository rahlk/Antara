#include <stdio.h>

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int arr[120];
int arr_idx = 0;
int used[120];

void permute(char *a, int l, int r)
{
	int i;
	if (l == r) {
		int t = 0;
		for (int j = 0; j < r; j++) {
			t = t * 10 + a[j] - '0';
		}
		arr[arr_idx++] = t;
	}
	else
	{
		for (i = l; i <= r; i++)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i));
		}
	}
}

int main()
{
	char str[] = "12345";
	int n = 5;
	permute(str, 0, n - 1);

	int test_case;
	scanf("%d", &test_case);

	int f;
	scanf("%d", &f);

	for (int te = 1; te <= test_case; te++) {
		for (int i = 0; i < 120; i++) {
			used[i] = 0;
		}

		for (int i = 0; i < 118; i++) {
			int t = 0;
			for (int j = 0; j < 4; j++) {
				int r = 5 * i + j;
				printf("%d", r);
				fflush(stdout);
				char a;
				scanf("%c", &a);
				scanf("%c", &a);
				t = t * 10 + a - 'A' + 1;
			}
			for (int j = 0; j < 120; j++) {
				if (t == arr[j]) {
					used[j] = 1;
					break;
				}
			}
		}

		int remain[2];
		int re_idx = 0;
		for (int j = 0; j < 120; j++) {
			if (used[j] == 0) {
				remain[re_idx++] = arr[j];
			}
		}

		int tt = 0;
		for (int j = 1; j < 4; j++) {
			int r = 118 * 5 + j;
			printf("%d", r);
			fflush(stdout);
			char a;
			scanf("%c", &a);
			scanf("%c", &a);
			tt = tt * 10 + a - 'A' + 1;
		}

		if ((remain[0] % 1000) == tt) {
			re_idx = 1;
		}
		else {
			re_idx = 0;
		}

		int k = remain[re_idx];
		char kk[5];
		for (int j = 0; j < 5; j++) {
			kk[j] = k % 10 + 'A' - 1;
			k /= 10;
		}
		for (int j = 4; j >= 0; j--) {
			printf("%c", kk[j]);
		}
		fflush(stdout);
		char correct;
		scanf("%c", &correct);
		scanf("%c", &correct);
	}

	return 0;
}