#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int q, p;
int _yn[N], ys[N], xw[N], xe[N];


int main() {
	int tt;
	cin >> tt;
	for (int tn = 1; tn <= tt; tn++) {
		cin >> p >> q;

		for (int i = 0; i <= q; i++) {
		 	_yn[i] = 0;
		 	ys[i] = 0;
		 	xw[i] = 0;
		 	xe[i] = 0;
		}

		for (int i = 0; i < p; i++) {
		 	int px, py;
		 	char d;
		 	cin >> px >> py >> d;
		 	if (d == 'N') {
				_yn[py + 1]++;
		 	} else if (d == 'S') {
				ys[py - 1]++;
		 	} else if (d == 'W') {
				xw[px - 1]++;
		 	} else {
				xe[px + 1]++;
		 	}
		}

		for (int i = 0; i < q; i++) {
		 	_yn[i + 1] += _yn[i];
		 	xe[i + 1] += xe[i];
		}

		for (int i = q; i > 0; i--) {
		 	ys[i - 1] += ys[i];
		 	xw[i - 1] += xw[i];
		}

		int ax = 0, ay = 0, best = 0;
		for (int i = 0; i <= q; i++) {
		 	if (best < _yn[i] + ys[i]) {
		 	 	best = _yn[i] + ys[i];
		 	 	ay = i;
		 	}
		}
		best = 0;
		for (int i = 0; i <= q; i++) {
			if (best < xw[i] + xe[i]) {
		 	 	best = xw[i] + xe[i];
		 	 	ax = i;
		 	}
		}

		printf("Case #%d: %d %d\n", tn, ax, ay);
	}

	return 0;
}