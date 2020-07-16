#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int cmp (ll *a, ll *b) { return *a < *b ? -1 : *a > *b ? 1 : 0; }
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a; }

ll arr[10001], res[10001];
ll cyp[10001];

int main (void) {
	
	int T, t, i, k;
	ll N, L, AB, BC, CD, AD, A;
	
	scanf ("%d", &T);
	
	for (t = 1; t <= T; t++) {
		
		scanf ("%lld %lld", &N, &L);
		
		for (i = 0; i < L; i++) scanf ("%lld", &arr[i]);
		
		AB = arr[0];
		BC = arr[1];
		CD = arr[2];
		AD = AB * CD / BC;
		if ((AB * CD) % BC) while (1);
		A = gcd (AB, AD);
		if (A == 1) while (1);
		
		res[0] = cyp[0] = A;
		for (i = 1; i <= L; i++)
			res[i] = cyp[i] = arr[i - 1] / res[i - 1];
		
		qsort (cyp, L + 1, sizeof (ll), cmp);
		
		for (i = k = 0; i <= L; i++) {
			
			if (cyp[k] != cyp[i])
				cyp[++k] = cyp[i];
		}
		
		printf ("Case #%d: ", t);
		for (i = 0; i <= L; i++) {
			
			for (k = 0; k < 26; k++) {
				
				if (res[i] == cyp[k]) {
					
					putchar ('A' + k);
					break;
				}
			}
		}
		puts ("");
	}
}
