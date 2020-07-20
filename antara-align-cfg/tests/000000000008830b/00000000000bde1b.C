#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// check if x < y
bool Less(string x, string y) {
	int i = 0;

	if (x[0] == '-' && y[0] != '-') return true;
	if (x[0] != '-' && y[0] == '-') return false;
	if (x[0] == '-' && y[0] == '-') {
		i = 1;
		swap(x, y);
	}

	while (x.length() > 1 && x[0] == '0') x.erase(x.begin());
	while (y.length() > 1 && y[0] == '0') y.erase(y.begin());

	if (x.length() < y.length()) return true;
	if (x.length() > y.length()) return false;

	for (; i < x.length(); ++i) {
		if (x[i] < y[i]) return true;
		else if (x[i] > y[i]) return false;
	}

	return false;
};

// x - y
string Subtraction(string x, string y) {
	int sign = 0, borrow = 0;
	int x_index = x.length() - 1;
	int y_index = y.length() - 1;
	string ans = "";

	if (Less(x, y)) {
		swap(x, y);
		sign = 1;
	}

	while (y_index >= 0) {
		if (x[x_index] - y[y_index] >= borrow) {
			ans = char('0' + x[x_index] - y[y_index] - borrow) + ans;
			borrow = 0;
		}
		else {
			ans = char('0' + x[x_index] - y[y_index] + 10 - borrow) + ans;
			borrow = 1;
		}
		--y_index;
		--x_index;
	}

	while (x_index >= 0) {
		if (x[x_index] - '0' >= borrow) {
			ans = char(x[x_index] - borrow) + ans;
			borrow = 0;
		}
		else {
			ans = char(x[x_index] + 10 - borrow) + ans;
			borrow = 1;
		}
		--x_index;
	}

	while (ans.length() > 1 && ans[0] == '0') ans.erase(ans.begin());
	if (sign) ans = '-' + ans;

	return ans;
};

// x / y
string Division(string x, string y) {
	int i, x_index = 0;
	string remainder = "", ans = "";

	if (Less(x, y)) return "0";

	for (x_index = 0; x_index < x.length(); ++x_index) {
		remainder += x[x_index];
		if (remainder[0] == '0') remainder.erase(remainder.begin());
		for (i = 0; !Less(remainder, y); ++i) remainder = Subtraction(remainder, y);
		ans += '0' + i;
	}
	while (ans.length() > 1 && ans[0] == '0') ans.erase(ans.begin());

	return ans;
};

// x % y
string Modulo(string x, string y) {
	int x_index = 0;
	string ans = "";

	if (Less(x, y)) return x;

	while (x_index < x.length()) {
		while (x_index < x.length() && Less(ans, y)) {
			ans += x[x_index++];
			if (ans[0] == '0') ans.erase(ans.begin());
		}
		while (!Less(ans, y)) ans = Subtraction(ans, y);
	}

	return ans;
}

string GreatestCommonDivisor(string x, string y) {
	string temp;

	if (x == "0" && y == "0") return "1";
	if (y == "0") return x;

	while (Modulo(x, y) != "0") {
		temp = y;
		y = Modulo(x, y);
		x = temp;
	}

	return y;
};

int main() {
	int i;
	int t, n, l;

	cin >> t;
	for (i = 1; i <= t; ++i) {
		// read data
		cin >> n >> l;
		
		vector<string> num(l + 1);
		for (int k = 1; k <= l; ++k) cin >> num[k];

		// main program
		int j;
		vector<int> index(l + 1, 0);
		char temp = 'A';
		string ans(l + 1, '*');

		num[0] = GreatestCommonDivisor(num[1], num[2]);
		num[0] = Division(num[1], num[0]);

		for (j = 0; j <= l; ++j) index[j] = j;
		for (j = 1; j <= l; ++j) num[j] = Division(num[j], num[j - 1]);

		sort(index.begin(), index.end(), [&](int a, int b) {return Less(num[a], num[b]); });

		ans[index[0]] = temp;
		for (j = 1; j <= l; ++j) {
			if (num[index[j]] == num[index[j - 1]]) ans[index[j]] = temp;
			else ans[index[j]] = ++temp;
		}

		// write result
		cout << "Case #" << i << ": " << ans << endl;
	}

	return 0;
}