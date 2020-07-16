#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#define mp(x,y) make_pair(x,y)
using namespace std;
typedef pair<int, int> pii;


int P, Q;
int ans;
vector<pii> xx;
vector<pii> yy;

void init(){
	xx.clear();
	yy.clear();
	ans = 0;
}
int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 1; tc <= T; tc++){
		printf("Case #%d: ", tc);
		init();
		scanf("%d%d", &P, &Q);
		char dir;
		for(int i = 0, x, y; i < P; i++){
			scanf("%d%d %c", &x, &y, &dir);
			if(dir == 'N'){
				xx.push_back({x,y});
			}
			if(dir == 'S'){
				xx.push_back({x,-y});
			}
			if(dir == 'E'){
				yy.push_back({x,y});
			}
			if(dir == 'W'){
				yy.push_back({-x,y});
			}
		}
		int maxx = 0, maxy = 0;
		int maxi = 0, maxj = 0;
		for(int x = 0; x <= Q; x++){
			int cnt = 0;
			for(auto e : yy){
				int curx = e.first;
				if(curx < 0 && -curx > x) cnt++;
				if(curx >= 0 && curx < x) cnt++;
			}
			if(cnt > maxx){
				maxx = cnt;
				maxi = x;
			}
		}
		for(int y = 0; y <= Q; y++){
			int cnt = 0;
			for(auto e : xx){
				int cury = e.second;
				if(cury < 0 && -cury > y) cnt++;
				if(cury >= 0 && cury < y) cnt++;
			}
			if(cnt > maxy){
				maxy = cnt;
				maxj = y;
			}
		}
		printf("%d %d\n", maxi, maxj);
	}
}