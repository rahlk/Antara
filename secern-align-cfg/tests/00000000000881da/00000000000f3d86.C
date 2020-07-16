#include <stdio.h>

#define	MAX	50050

int N;
char input[MAX];
char ans[MAX];
int flag;

void dfs(int idx, int e, int s, int inputE, int inputS)
{
	int ie = inputE, is = inputS;
	if (input[idx] == 'E')	ie++;
	else if (input[idx] == 'S') is++;

	if (flag == 1) return;
	if (idx == N * 2 - 2) {
		flag = 1;
		ans[idx] = '\n';
		printf("%s", ans);
		return;
	}

	if (flag == 0) {
		if (inputE == e && inputS == s) {
			if (input[idx] == 'E' && s < N - 1) {
				ans[idx] = 'S';
				dfs(idx + 1, e, s + 1, ie, is);
			}
			else if (input[idx] == 'S' && e < N - 1) {
				ans[idx] = 'E';
				dfs(idx + 1, e + 1, s, ie, is);
			}
		}
		else {
			if (e < N - 1) {
				ans[idx] = 'E';
				dfs(idx + 1, e + 1, s, ie, is);
			}
			if (s < N - 1) {
				ans[idx] = 'S';
				dfs(idx + 1, e, s + 1, ie, is);
			}
		}
	}
}

int main()
{
	int t, T;

	scanf("%d", &T);

	for (t = 0; t < T; t++) {
		flag = 0;
		input[0] = ans[0] = '\0';
		scanf("%d", &N);
		scanf("%s", input);

		printf("Case #%d: ", t + 1);

		if (input[0] == 'E') {
			ans[0] = 'S';
			dfs(1, 0, 1, 1, 0);
		}
		else if (input[0] == 'S') {
			ans[0] = 'E';
			dfs(1, 1, 0, 0, 1);
		}
	}

	return 0;
}