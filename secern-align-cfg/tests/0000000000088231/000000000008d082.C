#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

int tc;
string s;

int main(){
	scanf("%d",&tc);
	for(int cs = 1; cs <= tc; cs++){
		cin >> s;
		string a,b;
		a = b = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '4'){
				a.pb('2');
				b.pb('2');
			} else {
				a.pb(s[i]);
				b.pb('0');
			}
		}
		cout << "Case #" << cs << ": "<< a << " " << b << endl;
	}
}