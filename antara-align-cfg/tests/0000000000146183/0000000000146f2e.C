#include <stdio.h>
#include <set>

using namespace std;

int N;

typedef struct _mole {
	int c;
	int j;
}Mole;

Mole arr[305];

int Abs(int a) {
	if (a < 0)
		return -1 * a;
	else
		return a;
}

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main(void) {
	int t, T;
	int i;
	int j;
	int ans;

	scanf("%d", &T);

	for (t = 1; t <= T; t++) {
		set<pair<int, int>> s;
		ans = 1;
		scanf("%d", &N);

		for (i = 1; i <= N; i++)
			scanf("%d%d", &arr[i].c, &arr[i].j);

		for (i = 1; i <= N; i++) {
			for (j = i+1; j <= N; j++) {
				if (i == j)
					continue;

				if ((arr[i].c <= arr[j].c && arr[i].j <= arr[j].j) || (arr[i].c >= arr[j].c && arr[i].j >= arr[j].j))
					continue;

		
				
				int a = Abs(arr[i].c - arr[j].c);
				int b = Abs(arr[i].j - arr[j].j);
				int g = gcd(a, b);
				a /= g;
				b /= g;

				pair<int, int> tmp = make_pair(a,b);

				if (s.find(tmp) != s.end()) {
					continue;
				}
				else {
					ans++;
					s.insert(tmp);
				}
			}
		}

		printf("Case #%d: %d\n", t, ans);
	}
}