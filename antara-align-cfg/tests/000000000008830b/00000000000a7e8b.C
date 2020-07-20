#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int GreatestCommonDivisor(int x, int y) {
	int temp;

	if (x == 0 && y == 0) return 1;
	if (y == 0) return x;

	while (x % y) {
		temp = y;
		y = x % y;
		x = temp;
	}

	return y;
}

int main() {
	int i;
	int t, n, l;

	cin >> t;
	for (i = 1; i <= t; ++i) {
		// read data
		cin >> n >> l;
		
		bool flag = false;
		string temp;
		vector<int> num(l, 0);

		for (int j = 0; j < l; ++j) {
		    cin >> temp;
		    if(temp.length() > 9) flag = true;
		    else num[j] = stoi(temp);
		}
		if(flag) {
		    cout << "Case #" << i << ": " << "" << endl;
		    continue;
		}

		// main program
		int j;
		map<int, int> dic;
		vector<int> ans_num(l + 1, 0);
		string ans = "";

		ans_num[1] = GreatestCommonDivisor(num[0], num[1]);
		ans_num[0] = num[0] / ans_num[1];

		dic[ans_num[0]] = 0;
		for (j = 0; j < l; ++j) {
			ans_num[j + 1] = num[j] / ans_num[j];
			dic[ans_num[j + 1]] = 0;
		}

		j = 0;
		for (auto it = dic.begin(); it != dic.end(); ++it) {
			it->second = j++;
		}

		for (j = 0; j <= l; ++j) ans += 'A' + dic[ans_num[j]];

		// write result
		cout << "Case #" << i << ": " << ans << endl;
	}

	return 0;
}