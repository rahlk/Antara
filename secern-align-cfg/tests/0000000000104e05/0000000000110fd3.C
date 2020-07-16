// Alien Rhyme.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include <stdio.h>
#include <string.h>

int N;
char A[1005][55], B[55];
int maxLen;
int ans;
char available[1005];

void dfs(int pos) {
	if (pos >= maxLen)return;
	int cnt[26] = { 0, }, cntOne = 0;
	for (int i = 0; i < N; i++) {
		if (!available[i]) continue;
		if(A[i][pos] - 'A' >= 0) cnt[A[i][pos] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 2) {
			ans += 2;
		}
		else if (cnt[i] >= 4) {
			for (int j = 0; j < N; j++) {
				if (A[j][pos] - 'A' != i)available[j] = false;
			}
			dfs(pos + 1);
		}
		else if (cnt[i] == 1) {
			cntOne++;
		}
	}
	if (pos > 0 && cntOne >= 2)ans += 2;
}

int main() {
	int T;
	scanf("%d ", &T);
	for (int t = 1; t <= T; t++) {
		printf("Case #%d: ", t);
		ans = 0;
		maxLen = 0;
		scanf("%d ", &N);
		for (int i = 0; i < N; i++) {
			scanf("%s", B);
			int len = strlen(B);
			for (int j = 0; j < len; j++) {
				A[i][j] = B[len - j - 1];
			}
			if (len > maxLen)maxLen = len;
			available[i] = true;
		}
		dfs(0);
		printf("%d\n", ans);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < maxLen; j++) {
				A[i][j] = 0;
			}
		}
	}
	return 0;
}
