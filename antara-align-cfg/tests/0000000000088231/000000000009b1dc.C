#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	for (int iT = 0; iT < T; ++iT) {
		string n;
		cin >> n;	
		string a = "", b = "";
		for (auto i: n) {
			if (i == '4') {
				a.push_back('3');
				b.push_back('1');
			} else {
				int d = i - '0';
				bool good = false;
				for (int j = d - 1; j > 0; --j) {
					if (d - j != 4 && j != 4) {
						a.push_back((char)(j + '0'));
						b.push_back((char)(d - j + '0'));
						good = true;
						break;
					}
				}
				if (!good) {
					a.push_back(i);
					b.push_back('0');
				}
			}
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		while (!a.empty() && a.back() == '0') {
			a.pop_back();
		}
		while (!b.empty() && b.back() == '0') {
			b.pop_back();
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		cout << "Case #" << iT << ": " << a << " " << b << "\n";
	}
	return 0;
}