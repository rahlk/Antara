#include <stdio.h>
//fflush(stdout);
int main() {
	int T;
	int N, B, F;
	int a[1024][10];
	int rep[1024][10];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &N, &B, &F);
		int ques = 0;
		int s = 1;
		while (1) {
			if (s >= N)
				break;
			else {
				ques = ques + 1;
				s = s * 2;
			}
		}
		for (int j = 0; j < N ; j++) {
			int tmp = j;
			for (int k = 0; k < ques; k++) {
				a[j][ques - 1 - k] = tmp % 2;
				tmp = tmp / 2;
			}
		}
		for (int j = 0; j < ques; j++) {
			for (int k = 0; k < N; k++) {
				printf("%d", a[k][j]);
			}
			getchar();
			for (int k = 0; k < N - B; k++) {
				scanf("%1d", &rep[k][j]);
			}

			fflush(stdout);
		}
		int last = -1;
		for (int j = 0; j <= N-B; j++) {
			int cur = 0;
			if (j < N - B) {
				for (int k = 0; k < ques; k++) {
					cur = cur * 2;
					cur = cur + rep[j][k];
				}
			}
			else
				cur = N;
			if (cur == last + 1) {
				last = cur;
			}
			else {
				for (int l = last + 1; l < cur; l++) {
					printf("%d", l);
					if (l != cur - 1)
						printf(" ");
				}
			}
		}	
	}
	return 0;
}