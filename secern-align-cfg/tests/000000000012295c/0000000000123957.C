#include <stdio.h>
#include <stdlib.h>

struct info_t {
	int coord;
	int delta; /* add this just before evaluating this coord */
};

int cmp_coord(const void* asumi_kana, const void* sakura_ayane) {
	int murakawa_rie = ((const struct info_t*)asumi_kana)->coord;
	int naduka_kaori = ((const struct info_t*)sakura_ayane)->coord;
	if (murakawa_rie < naduka_kaori) return -1;
	return murakawa_rie > naduka_kaori;
}

int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int P, Q;
		int i;
		struct info_t *x_infos, *y_infos;
		int x_info_count = 0, y_info_count = 0;
		int x_answer = 0, y_answer = 0;
		int current, best;
		if (scanf("%d%d", &P, &Q) != 2) return 1;
		if ((x_infos = malloc(sizeof(*x_infos) * P)) == NULL) return 1;
		if ((y_infos = malloc(sizeof(*y_infos) * P)) == NULL) return 1;
		for (i = 0; i < P; i++) {
			int X, Y;
			char D[4];
			if (scanf("%d%d%3s", &X, &Y, D) != 3) return 1;
			switch (D[0]) {
				case 'N':
					y_infos[y_info_count].coord = Y + 1;
					y_infos[y_info_count].delta = 1;
					y_info_count++;
					break;
				case 'S':
					y_infos[y_info_count].coord = Y;
					y_infos[y_info_count].delta = -1;
					y_info_count++;
					break;
				case 'E':
					x_infos[x_info_count].coord = X + 1;
					x_infos[x_info_count].delta = 1;
					x_info_count++;
					break;
				case 'W':
					x_infos[x_info_count].coord = X;
					x_infos[x_info_count].delta = -1;
					x_info_count++;
					break;
			}
		}
		qsort(x_infos, x_info_count, sizeof(*x_infos), cmp_coord);
		qsort(y_infos, y_info_count, sizeof(*y_infos), cmp_coord);
		current = best = 0;
		for (i = 0; i < x_info_count; i++) {
			current += x_infos[i].delta;
			if (current > best) {
				best = current;
				x_answer = x_infos[i].coord;
			}
		}
		current = best = 0;
		for (i = 0; i < y_info_count; i++) {
			current += y_infos[i].delta;
			if (current > best) {
				best = current;
				y_answer = y_infos[i].coord;
			}
		}
		printf("Case #%d: %d %d\n", caseCount, x_answer, y_answer);
		free(x_infos);
		free(y_infos);
	}
	return 0;
}
