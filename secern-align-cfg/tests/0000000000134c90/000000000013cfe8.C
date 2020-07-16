#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
	int i, j, k;
	int T, A, lo;
	int ind;
	char str[255][501] = {0};
	int slen[255] = {0};
	int lose[255] = {0};
	char p1[3] = {'R', 'S', 'P'}; //RSP
	char lost1[3] = {'S', 'P', 'R'};
	char p2[3] = {'S', 'P', 'R'}; //RSP
	int type[3] = {0}; //PRS
	int typecount = 0;
	int maxlen = -1;
	int loser = 0;
	scanf("%d\n", &T);
	char ans[500] = {0};
	
	for (i = 0; i < T; i++) {
		printf("Case #%d: ", i+1);
		scanf("%d\n", &A);
		maxlen = -1;
		for (j = 0; j < A; j++) {
			fgets(str[j], 501, stdin);
			slen[j] = (int)strlen(str[j]) - 1;
			if (slen[j] > maxlen)
				maxlen = slen[j];
			//printf("ml = %d\n", maxlen);
		}
		loser = 0;
		typecount = 0;
		for (j = 0; j < 500; j++) {
			for (k = 0; k < A; k++) {
				if (lose[k]) continue;
				ind = j;
				if (j >= slen[k]) ind = j%slen[k];
				//printf ("j = %d k = %d, ind = %d\n", j, k, ind);
				if (str[k][ind] == 'P')	{
					type[0] = 1;
				} else if (str[k][ind] == 'R') {
					type[1] = 1;
				} else if (str[k][ind] == 'S') {
					type[2] = 1;
				}
			}
			for (k = 0; k < 3; k++) {
				if (type[k] == 1) typecount++;
				//printf("type[%d] = %d\n", k, type[k]);
			}
			//printf("typecount = %d\n", typecount);
			if (typecount == 3) {
				j = 500;
				//printf("IMPOSSIBLE");
				break;
			}
			if (typecount == 2) {
				for (k = 0; k < 3; k++) {
					if(type[k] == 0) {
						ans[j] = p1[k];
						//printf("%c", p1[k]);
						break;
					}
				}
				lo = k;
				for (k = 0; k < A; k++) {
					if (lose[k]) continue;
					ind = j;
					if (j >= slen[k]) ind = j%slen[k];
					if (str[k][ind] == lost1[lo]) {
						lose[k] = 1;
						loser++;
					}
				}
			} else if (typecount == 1) {
				for (k = 0; k < 3; k++) {
					if(type[k] == 1) {
						//printf("%c", p2[k]);
						ans[j] = p2[k];
						break;
					}
				}
				break;
			}
			for (k = 0; k < 3; k++) {
				type[k] = 0;
			}
			typecount = 0;
			//printf("loser = %d\n", loser);
			if (loser == A) break;
		}
		if (j == 500) printf ("IMPOSSIBLE\n");
		else printf ("%s\n", ans);
		//printf("max len = %d\n", maxlen);
		for (j = 0; j < A; j++) {
			lose[j] = 0;
		}
		for (k = 0; k < 3; k++) {
			type[k] = 0;
		}
		memset(ans, 0, sizeof(ans));
		typecount = 0;
	}
	return 0;
}
