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

	int test_case, f;
	scanf("%d %d", &test_case, &f);
	
	char res[32];

	for (int te = 1; te <= test_case; te++) {
		for (int i = 0; i < 120; i++) {
			used[i] = 0;
		}

		for (int i = 0; i < 118; i++) {
			int t = 0;
			for (int j = 0; j < 4; j++) {
				int r = 5 * i + j;
				printf("%d\n", r);
				fflush(stdout);
				scanf("%s", res);
				t = t * 10 + res[0] - 'A' + 1;
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
			printf("%d\n", r);
			fflush(stdout);
			scanf("%s", res);
			tt = tt * 10 + res[0] - 'A' + 1;
		}

		if ((remain[0] % 1000) == tt) {
			re_idx = 1;
		}
		else {
			re_idx = 0;
		}

		int k = remain[re_idx];
		char kk[5];
		int rem[5] = {0, };
		for (int j = 0; j < 4; j++) {
			kk[j] = k % 10 + 'A' - 1;
			rem[k % 10 - 1] = 1;
			k /= 10;
		}
		for (int j = 0; j < 5; j++) {
		    if(rem[j] == 0) {
		        kk[4] = j + 1 + 'A';
		        break;
		    }
		}
		for (int j = 4; j >= 0; j--) {
			printf("%c", kk[j]);
		}
		printf("\n");
		fflush(stdout);
		scanf("%s", res);
	}

	return 0;
}