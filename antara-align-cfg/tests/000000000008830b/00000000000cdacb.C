#include <stdio.h>
#include <assert.h>
int gcd(int a, int b) { return a%b?gcd(b,a%b):b; }
int pt[101];
int uniq[26];
int main() {
	int t;
	scanf("%d", &t);
	for(int tt=1;tt<=t;tt++) {
		int n,l;
		scanf("%d%d", &n,&l);
		int f, g;
		scanf("%d%d", &f, &g);
		pt[0] = f/gcd(f,g);
		pt[1] = gcd(f,g);
		pt[2] = g/gcd(f,g);
		for (int i = 2; i < l; i++) {
			assert(pt[i]);
			int now;
			scanf("%d", &now);
			pt[i+1] = now/pt[i];
		}
		printf("Case #%d: ", tt);
		int nuniq = 0;
		for (int i = 0; i <= l; i++) {
			for (int j = 0; j < nuniq; j++) {
				if (uniq[j] == pt[i]) {
					goto out;
				}
			}
			uniq[nuniq++] = pt[i];
		out:;
		}

		for (int i = 0; i <= l; i++) {
			char ch = 'A';
			for (int j = 0; j < nuniq; j++) {
				if (pt[i] > uniq[j]) ch++;
			}
			printf("%c", ch);
		}
		printf("\n");
	}
}