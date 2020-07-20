#include <iostream>
#include <set>

using namespace std;

long long int T, N, L;

long long int gcd(long long int a, long long int b) {
	if (a == b) return a;
	if (a > b) return gcd(b, a - b);
	else return gcd(b - a, a);
}

int main() {
	long long int primes[26];
	long long int decipher[101];
	cin >> T;

	for (int tc = 1; tc <= T; tc++) {
		cin >> N >> L;
		long long int a, b;
		set<long long int> s;

		cin >> a >> b;

		decipher[1] = gcd(a, b);
		decipher[0] = a / decipher[1];
		decipher[2] = b / decipher[1];

		s.insert(decipher[0]);
		s.insert(decipher[1]);
		s.insert(decipher[2]);

		for (int i = 3; i < L+1; ++i) {
			scanf("%lld", &a);
			decipher[i] = a / decipher[i - 1];
			s.insert(decipher[i]);
		}
		decipher[L + 1] = a / decipher[L];
		s.insert(decipher[L+1]);


		cout << "Case #" << tc << ": ";
		for (int i = 0; i <= L; ++i) {
			auto it = s.begin();
			for (int j = 0; j < 26; ++j, it++) {
				if (*it == decipher[i]) {
					char c = 'A' + j;
					cout << c;
					break;
				}
			}
		}
		cout << '\n';
	}
}