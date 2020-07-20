#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct section {
	int start, end;
	int reply_index;
	int missing;
};

int cmp(const int *a, const int *b) { return *a - *b; }

void solve_one() {
	char buf[1034];
	char query[1025];
	int broken[16];
	struct section sec[2][15];
	int nsec[2] = {0};
	int nbroken = 0;
	int n, b, f;
	fprintf(stderr, "New testcase\n");
	scanf("%d%d%d", &n, &b, &f);
	fgets(buf, 2, stdin);
	if (n > (b + 1) * 2) {
		fprintf(stderr, "Pre filter\n");
		// Pre filter pass
		int part = (n - 1) / (b + 1) + 1;
		int curr = 0;
		for (int i = 0; i < part; i++) {
			for (int j = 0; i * (b + 1) + j < n; j++) {
				query[i * (b + 1) + j] = '0' + curr;
			}
			curr = !curr;
		}
		query[n] = '\0';
		printf("%s\n", query);
		fprintf(stderr, "TEST_STORE %s\n", query);
		fflush(stdout);
		fgets(buf, n + 4, stdin);
		buf[n] = '\0';        // erase newline
		fprintf(stderr, "reply %s\n", buf);
		int ind = 0;
		curr = 0;
		for (int i = 0; i < part; i++) {
			int cnt = 0;
			int save_ind = ind;
			while (buf[ind] == '0' + curr) {
				ind++;
				cnt++;
			}
			int missing =
			    (i == part - 1) ? (n-1) % (b + 1)+1 - cnt : b + 1 - cnt;
			if (missing != 0) {
				sec[0][nsec[0]++] = (struct section){
				    .start = (b + 1) * i,
				    .end = i == part - 1 ? n - 1 : (b + 1) * i + b,
				    .missing = missing,
				    .reply_index = save_ind,
				};
				fprintf(stderr, "add [%d, %d] %d\n", (b+1)*i, i == part - 1 ? n - 1 : (b+1)*i+b, missing);
			}
			curr = !curr;
		}
	} else {
		nsec[0] = 1;
		sec[0][0] = (struct section){
		    .start = 0, .end = n - 1, .missing = b, .reply_index = 0};
	}

	int curr = 0;
	memset(query, '0', n);
	while (true) {
		nsec[!curr] = 0;
		for (int i = 0; i < nsec[curr]; i++) {
			fprintf(stderr, "sec [%d, %d] %d\n", sec[curr][i].start,
			        sec[curr][i].end, sec[curr][i].missing);
			int mid = (sec[curr][i].start + sec[curr][i].end) / 2;
			for (int j = sec[curr][i].start; j <= sec[curr][i].end; j++) {
				query[j] = (j > mid) ? '1' : '0';
			}
		}
		query[n] = '\0';
		printf("%s\n", query);
		fprintf(stderr, "query %s\n", query);
		fflush(stdout);
		fgets(buf, n + 2, stdin);
		buf[n] = '\0';        // erase newline
		fprintf(stderr, "reply %s\n", buf);

		// Process each section
		for (int i = 0; i < nsec[curr]; i++) {
			int expected = sec[curr][i].end - sec[curr][i].start + 1 -
			               sec[curr][i].missing;
			int cnt[2] = {0};
			int ind = sec[curr][i].reply_index;
			fprintf(stderr, "reply_index: %d, %d\n", ind, ind+expected);
			for (int j = ind; j < ind + expected; j++) {
				assert(buf[j] == '0' || buf[j] == '1');
				cnt[buf[j] - '0']++;
			}
			int total = sec[curr][i].end - sec[curr][i].start + 1;
			int mid = (sec[curr][i].start + sec[curr][i].end) / 2;
			int zero = mid - sec[curr][i].start + 1;
			fprintf(stderr, "zero: %d one: %d %d\n", cnt[0], cnt[1], mid);
			if (cnt[0] == 0) {
				fprintf(stderr, "first part of [%d,%d] missing\n",
				        sec[curr][i].start, sec[curr][i].end);
				for (int j = sec[curr][i].start; j <= mid; j++) {
					broken[nbroken++] = j;
				}
				fprintf(stderr, "nb %d\n", nbroken);
			} else if (cnt[0] != zero) {
				sec[!curr][nsec[!curr]++] = (struct section){
				    .start = sec[curr][i].start,
				    .end = mid,
				    .missing = zero - cnt[0],
				    .reply_index = ind,
				};
			}
			if (cnt[1] == 0) {
				fprintf(stderr,
				        "second part of [%d,%d] ([%d, %d]) "
				        "missing\n",
				        sec[curr][i].start, sec[curr][i].end,
				        mid + 1, sec[curr][i].end);
				for (int j = mid + 1; j <= sec[curr][i].end; j++) {
					broken[nbroken++] = j;
				}
				fprintf(stderr, "nb %d\n", nbroken);
			} else if (cnt[1] != total - zero) {
				sec[!curr][nsec[!curr]++] = (struct section){
				    .start = mid + 1,
				    .end = sec[curr][i].end,
				    .missing = total - zero - cnt[1],
				    .reply_index = ind + cnt[0],
				};
			}
			if (nbroken == b) {
				qsort(broken, b, sizeof(int), (void *)cmp);
				for (int j = 0; j < nbroken; j++) {
					printf("%d ", broken[j]);
				}
				printf("\n");
				fflush(stdout);
				int verdict;
				scanf("%d", &verdict);
				assert(verdict);
				return;
			}
			for (int j = 0; j < nbroken; j++) {
				fprintf(stderr, "%d ", broken[j]);
			}
			fprintf(stderr, "\n");
		}
		curr = !curr;
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		solve_one();
	}
}