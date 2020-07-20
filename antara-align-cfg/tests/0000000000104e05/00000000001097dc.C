#include <bits/stdc++.h>

#define pb push_back
#define pob pop_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

struct nd{
	int cnt;
	nd* nxt[26];
	nd(){
		cnt = 0;
		for(int i = 0; i < 26; i++) nxt[i] = NULL;
	}
};

nd* ar;


int cses;

void insert(nd* node, string s, int idx){
	if(idx == s.size()) return;
	// printf("inserting %c\n",s[idx]);
	int cr = s[idx]-'A';
	// printf("\t%c = %dth letter\n",s[idx],cr);
	if(node->nxt[cr] == NULL){
		node->nxt[cr] = new nd();
	}
	node->nxt[cr]->cnt += 1;
	// printf("\tcount on %c = %d\n", s[idx],node->nxt[cr]->cnt);
	insert(node->nxt[cr],s,idx+1);
}

int cnt = 0;

string suffx = "";

int trv(nd* node){
	if(node == NULL) return 0;
	/////////////////
	// cout << suffx << " " << node->cnt << endl;
	///////////////
	if(node->cnt == 1) return 0;
	if(node->cnt == 2){
		// cout << "found 2 in " << suffx << endl;
		cnt += 2;
		return 2;
	}
	int tcnt = 0;
	for(int i = 0; i < 26; i++){
		suffx.pb('A'+i);
		int tts = trv(node->nxt[i]);
		suffx.pob();
		tcnt += tts;
	}
	if(node->cnt-tcnt >= 2){
		// cout << "squeeze two in for " << suffx << endl;;
		tcnt += 2;
		cnt += 2;
		return tcnt;
	}
}

int main(){
	scanf("%d",&cses);
	for(int cse = 1; cse <= cses; cse++){
		ar = new nd();
		cnt = 0;
		int n;
		scanf("%d",&n);
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			reverse(s.begin(), s.end());
			// cout << "insert " << s << endl;
			insert(ar, s, 0);
		}
		//suffix trie
		trv(ar);
		printf("Case #%d: %d\n",cse,cnt);
	}

}