#include <stdio.h>
#include <inttypes.h>

struct cond_t {
	int64_t bunsi, bunbo; /* j op (bunsi / bunbo) * c */
	int smaller; /* 1 : op is < , 0 : op is > */
};

int cmp(const struct cond_t* a, const struct cond_t* b) {
	int64_t va = a->bunsi * b->bunbo;
	int64_t vb = b->bunsi * a->bunbo;
	if (va < vb) return -1;
	return va > vb;
}

int cmp2(int64_t a, const struct cond_t* b) {
	struct cond_t va;
	va.bunsi = a;
	va.bunbo = 1;
	va.smaller = 1;
	return cmp(&va, b);
}

int cmp2_mul(int64_t a, int64_t m, const struct cond_t* b) {
	struct cond_t vb;
	vb.bunsi = b->bunsi * m;
	vb.bunbo = b->bunbo;
	vb.smaller = b->smaller;
	return cmp2(a, &vb);
}

int64_t gcd(int64_t a, int64_t b) {
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	while (b != 0) {
		int64_t r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void) {
	int caseNum, caseCount;
	if (scanf("%d", &caseNum) != 1) return 1;
	for (caseCount = 1; caseCount <= caseNum; caseCount++) {
		int N;
		int C[16], J[16];
		struct cond_t conds[16];
		int cnum;
		int i;
		struct cond_t smaller_min, bigger_max;
		int smaller_exists;
		int64_t answer_c, answer_j;
		if (scanf("%d", &N) != 1) return 1;
		for (i = 0; i < N; i++) {
			if (scanf("%d%d", &C[i],&J[i]) != 2) return 1;
		}
		for (i = 1; i <= N; i++) {
			if ((C[i] == C[i+1] && J[i] >= J[i+1]) ||
			(J[i] == J[i+1] && C[i] >= C[i+1])) {
				printf("Case #%d: IMPOSSIBLE\n", caseCount);
				continue;
			}
		}
		cnum = 0;
		for (i = 1; i < N; i++) {
			/* jk * j < ck * c */
			int64_t jk = (int64_t)J[i-1] - J[i];
			int64_t ck = (int64_t)C[i] - C[i-1];
			if (ck != 0 && jk != 0) {
				int64_t g;
				if (jk > 0) {
					conds[cnum].bunsi = ck;
					conds[cnum].bunbo = jk;
					conds[cnum].smaller = 1;
				} else {
					conds[cnum].bunsi = -ck;
					conds[cnum].bunbo = -jk;
					conds[cnum].smaller = 0;
				}
				g = gcd(conds[cnum].bunsi, conds[cnum].bunbo);
				conds[cnum].bunsi /= g;
				conds[cnum].bunbo /= g;
				cnum++;
			}
		}
#if 0
		for (i = 0; i < cnum; i++) {
			printf("j %c (%" PRId64 " / %" PRId64 ") c\n",
				conds[i].smaller ? '<' : '>', conds[i].bunsi, conds[i].bunbo);
		}
#endif
		smaller_min.bunsi = INT64_C(1000000000000000);
		smaller_min.bunbo = 1;
		smaller_min.smaller = 1;
		smaller_exists = 0;
		bigger_max.bunsi = 0; /* answer must be positive */
		bigger_max.bunbo = 1;
		bigger_max.smaller = 0;
		for (i = 0; i < cnum; i++) {
			if (conds[i].smaller) {
				smaller_exists = 1;
				if (cmp(&conds[i], &smaller_min) < 0) {
					smaller_min = conds[i];
				}
			} else {
				if (cmp(&conds[i], &bigger_max) > 0) {
					bigger_max = conds[i];
				}
			}
		}
#if 0
		printf("j %c (%" PRId64 " / %" PRId64 ") c\n",
			smaller_min.smaller ? '<' : '>', smaller_min.bunsi, smaller_min.bunbo);
		printf("j %c (%" PRId64 " / %" PRId64 ") c\n",
			bigger_max.smaller ? '<' : '>', bigger_max.bunsi, bigger_max.bunbo);
#endif
		answer_c = answer_j = -1;
		if (bigger_max.bunsi > 0) {
			if (smaller_exists) {
				/* both */
				if (cmp(&smaller_min, &bigger_max) >= 0) {
					/* (large) < answer < (small) */
					answer_c = answer_j = -1;
				} else {
					answer_c = 1;
					answer_j = (bigger_max.bunsi + bigger_max.bunbo) / bigger_max.bunbo;
					for (;;) {
						if (cmp2_mul(answer_j, answer_c, &smaller_min) < 0) {
							/* OK */
							break;
						}
						/* too big */
						/* get smallest c where current j < sm.bunsi / sm.bunbo * c */
						/* c > j * sm.bunbo / sm.bunsi */
						answer_c = (answer_j * smaller_min.bunbo + smaller_min.bunsi) / smaller_min.bunsi;
						if (cmp2_mul(answer_j, answer_c, &bigger_max) > 0) {
							/* OK */
							break;
						}
						/* too small */
						/* get smallerst j where j > bi.bunsi / bi.bunbo * c */
						answer_j = (answer_c * bigger_max.bunsi + bigger_max.bunbo) / bigger_max.bunbo;
					}
				}
			} else {
				/* bigger constraint only */
				answer_c = 1;
				answer_j = (bigger_max.bunsi + bigger_max.bunbo) / bigger_max.bunbo;
			}
		} else {
			if (smaller_exists) {
				/* smaller constraint only */
				if (smaller_min.bunsi <= 0) {
					/* 0 < answer < (non-positive) */
					answer_c = answer_j = -1;
				} else {
					/* minimum c that 1 < smaller_min * c */
					/* 1 < bunsi / bunbo * c */
					/* bunbo < bunsi * c */
					/* c > bunbo / bunsi */
					answer_c = (smaller_min.bunbo + smaller_min.bunsi) / smaller_min.bunsi;
					answer_j = 1;
				}
			} else {
				/* no constraints */
				answer_c = answer_j = 1;
			}
		}
		printf("Case #%d: ", caseCount);
		if (answer_c >= 0) {
			printf("%" PRId64 " %" PRId64 "\n", answer_c, answer_j);
		} else {
			puts("IMPOSSIBLE");
		}
	}
	return 0;
}

/*
C[i] * c + J[i] * j < C[i+1] * c + J[i+1] * j

if C[i] == C[i+1]
   if J[i] >= J[i+1] IMPOSSIBLE
if J[i] == J[i+1]
  if C[i] >= C[i+1] IMPOSSIBLE
otherwise, IF C[i] == C[i+1] or J[i] == J[i+1] remove the condition

*/
