#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string input[1001];


int min(int a, int b) {
	if (a < b) return a;
	return b;
}

int func(string a, string b) {
	int l1, l2;
	l1 = a.length();
	l2 = b.length();
	int l = min(l1, l2);
	int cnt = 0;
	int i = 1;
	while (i<=l) {
		if (a[l1 - i] != b[l2 - i]) break;
		cnt++;
		i++;
	}
	return cnt;
}

int answer(int n) {
	if (n == 1) return 0;
	if (n == 2) return func(input[1], input[2]);
	int max=0, p=1, q=2;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			int x = func(input[i], input[j]);
			if (x > max) {
				max = x;
				p = i;
				q = j;
			}
		}
	}
	string copy[1001];
	int cur = 1;
	for (int i = 1; i <= n; i++) {
		if (i != p && i != q) {
			copy[cur].assign(input[i]);
			cur++;
		}
	}
	for (int i = 1; i <= n - 2; i++) {
		input[i].assign(copy[i]);
	}


	return max + answer(n - 2);
}


int main() {
	int T; //number of test case
	cin >> T;
	for (int testcase = 1; testcase <= T; testcase++) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> input[i];

		int ans = answer(n);

		cout << "Case #" << testcase << ": ";
		cout << ans << endl;
	}
}
