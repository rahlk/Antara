#ifndef _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS 
#endif 


#include <stdio.h>

char word[1005][55];;
int len[1005];

struct L {
	int id;
	struct L *next;
} list[1005];

struct W {
	int cnt;
	struct L *st;
} w[51];

int main() {
	int T, N;

	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%s", word[i]);
			int l = 0;
			while (word[i][l]) l++;
			len[i] = l;
		}

		for (int i = 0; i < 51; i++) { w[i].cnt = 0; w[i].st = 0; }

		int M = 0;
		for (int i = 0; i < N; i++) {
			int max = 0;
			int idx = -1;
			for (int j = 0; j < N; j++) {
				if (i == j) continue;
				int cnt = 0;

				while (word[i][len[i] - cnt - 1] == word[j][len[j] - cnt - 1]) 	cnt++;
	
				if (max < cnt) {
					max = cnt;
					idx = j;
				}
			}
			w[max].cnt++;
			list[i].id = i;
			list[i].next = w[max].st;
			w[max].st = &list[i];

			if (M < max) M = max;
		}

		int s = 0;
		for (int i = M; i > 0; i--) {
			if (w[i].cnt > 1) {
				struct L *z = w[i].st;
				while (z) {
					struct L  *tmp = z->next;
					struct L  *pre = z;
					int flg = 1;
					while (tmp) {
						int cnt = 0;
						int x, y;
						x = z->id;
						y = tmp->id;
						while (word[x][len[x] - cnt - 1] == word[y][len[y] - cnt - 1]) 	cnt++;
						if (cnt == i) {
							if (flg) {
								pre->next = tmp->next;

								w[0].cnt++;
								tmp->next = w[0].st;
								w[0].st = tmp;

								tmp = pre;
								flg = 0;
							}
							else {
								pre->next = tmp->next;

								w[cnt - 1].cnt++;
								tmp->next = w[cnt - 1].st;
								w[cnt - 1].st = tmp;

								tmp = pre;
							}
						}

						pre = tmp;
						tmp = tmp->next;
					}
					z = z->next;
					while (z && z->id < 0) z = z->next;
					s += 2;
				}
			}
		}

		printf("Case #%d: %d\n", t, s);
	}

	return 0;
}

