#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning (disable:4996)

int AccentPairLoc(char*w1, char*w2);
int IsPaired(int n, int*List, int nPaired);

int main()
{
	int T = 0, N = 0, arrnN[1000] = { 0, }, i = 0, j = 0, k = 0, nMatched = 0, nDuplicates=0;
	int PairLoc[1000] = { 0, }, AlreadyPaired[1000] = { 0, }, GreatestMatch = 0, ans[100] = { 0, }, currentlyPaired = 0, GMI = 0;
	char W[1000][51] = { 0, };

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		memset(AlreadyPaired, 0, sizeof(int) * 1000);
		memset(W, 0, sizeof(W));
		currentlyPaired = 0;
		nDuplicates = 0;
		for (j = 0; j < N; j++) {
			scanf("%s", W[j]);
		}
		for (j = 0; j < N; j++) {
			if (IsPaired(j, AlreadyPaired, currentlyPaired)) continue;
			GMI = 0;
			GreatestMatch = 0;
			
			for (k = 0; k < N; k++) {
				if (IsPaired(k, AlreadyPaired, currentlyPaired) || j == k) continue;
				nMatched = AccentPairLoc(W[j], W[k]);
				if (nMatched > GreatestMatch) {
					GreatestMatch = nMatched;
					GMI = k;
				}
				else if (nMatched == GreatestMatch && nMatched != 0) {
					nDuplicates++;
				}
			}

			if (nDuplicates == N - 2 && N != 2) {
				currentlyPaired = N/2;
				break;
			}

			if (GreatestMatch != 0) {
				AlreadyPaired[currentlyPaired] = j;
				AlreadyPaired[currentlyPaired + 1] = GMI;
				currentlyPaired += 2;
			}
		}
		ans[i] = currentlyPaired;
	}
	
	for (i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i+1, ans[i]);
	}


	system("pause");

	return 0;
}

int AccentPairLoc(char*w1, char*w2)
{
	int i = 0, len1 = strlen(w1)-1, len2 = strlen(w2)-1;

	if (len1 > len2) { //if w1 is longer than w2, use w2 as base
		for (i = 0; i < len2; i++) {
			if (w2[len2 - i] != w1[len1 - i]) {
				return i;
			}
		}
	}
	else {
		for (i = 0; i < len1; i++) {
			if (w2[len2 - i] != w1[len1 - i]) {
				return i;
			}
		}
	}

	return i;
}

int IsPaired(int n, int*List, int nPaired)
{
	int i = 0;
	for (i = 0; i < nPaired; i++) {
		if (List[i] == n) {
			return 1;
		}
	}
	return 0;
}