#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100;
int w, T, result;
ll res[N];
vector<double> sol;
vector<double>v;
vector<vector<double>>mat;
bool guass() {
	sol.clear();
	sol.resize(6);
	for (int i = 0 ; i < mat.size(); ++i) {
		int mx = i;
		for (int j = i + 1 ; j < mat.size(); ++j)
			if (abs(mat[j][i]) > abs(mat[mx][i]))mx = j;
		swap(mat[i], mat[mx]);
		double tmp = mat[i][i];
		for (int j = 0 ; j < mat[i].size(); ++j)
			mat[i][j] /= tmp;

		for (int j = i + 1 ; j < mat.size(); ++j) {
			double tmp = mat[j][i];
			for (int k = 0 ; k < mat[j].size(); ++k)
				mat[j][k] -= tmp * mat[i][k];
		}
	}
	for (int i = mat.size() - 1; i >= 0 ; --i) {
		sol[i] = mat[i][6];
		for (int j = i + 1 ; j < 6 ; ++j) {
			sol[i] -= sol[j] * mat[i][j];
		}
	}
}
int main() {
	cin >> T >> w;
	for (int t = 1; t <= T; t++) {
		ll x;
		for (int i = 1; i <= 6; ++i) {
			cout << i << endl;
			fflush(stdout);
			cin >> x;
			res[i] = x;
			//cout<<res[i]<<endl;
		}
		mat.clear();
		v.clear();
		v.push_back(2);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(res[1]);
		mat.push_back(v);
		v.clear();
		v.push_back(4);
		v.push_back(2);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(res[2]);
		mat.push_back(v);
		v.clear();
		v.push_back(8);
		v.push_back(2);
		v.push_back(2);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(res[3]);
		mat.push_back(v);
		v.clear();

		v.push_back(16);
		v.push_back(4);
		v.push_back(2);
		v.push_back(2);
		v.push_back(1);
		v.push_back(1);
		v.push_back(res[4]);
		mat.push_back(v);
		v.clear();


		v.push_back(32);
		v.push_back(4);
		v.push_back(2);
		v.push_back(2);
		v.push_back(2);
		v.push_back(1);
		v.push_back(res[5]);
		mat.push_back(v);
		v.clear();


		v.push_back(64);
		v.push_back(8);
		v.push_back(4);
		v.push_back(2);
		v.push_back(2);
		v.push_back(2);
		v.push_back(res[6]);
		mat.push_back(v);
		v.clear();
		// for (int i = 0; i < 6; i++, puts(""))
		// 	for (int j = 0; j < 7; j++) {
		// 		cout << mat[i][j] << " ";
		// 	}
		guass();
		for (int i = 0; i < 6; i++) {
			cout << (ll)sol[i] << " ";
		}
		cout << endl;
		fflush(stdout);
		cin >> result;
		assert(result == 1);
	}
	return 0;
}