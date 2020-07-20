#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;

int ans;
char cell[17][17];
int R,C;
vector<int> x[226];
vector<int> y[226];

int dfs(int idx){
    int lose = 1;
	for(int i=1; i<=R; ++i){
		for(int j=1; j<=C; ++j){
			if(cell[i][j] == '.'){
				int rad = 0;
                x[idx].clear();
                y[idx].clear();
                //H
				cell[i][j] = 'H';
				// east
				for(int ii = j+1; ii<=C; ++ii){
					if(cell[i][ii] == '#'){
                        rad = 1;
                        break;
                    } else if (cell[i][ii] == '.'){
                        x[idx].push_back(i);
                        y[idx].push_back(ii);
                        cell[i][ii] = 'H';
                    } else if (cell[i][ii] == 'H' || cell[i][ii] == 'V'){
                        break;
                    }
				}
				// west
                for(int ii = j-1; ii>=1; --ii){
					if(cell[i][ii] == '#'){
                        rad = 1;
                        break;
                    } else if (cell[i][ii] == '.'){
                        x[idx].push_back(i);
                        y[idx].push_back(ii);
                        cell[i][ii] = 'H';
                    } else if (cell[i][ii] == 'H' || cell[i][ii] == 'V'){
                        break;
                    }
				}
                if(rad == 1){
                    //
                } else {
                    lose = 0;
                    dfs(idx+1);
                }
                while(!x[idx].empty()){
                    int xp = x[idx].back(); x[idx].pop_back();
                    int yp = y[idx].back(); y[idx].pop_back();
                    cell[xp][yp] = '.';
                }
                rad = 0;
				//V
				cell[i][j] = 'V';
				// south
				for(int ii = i+1; ii<=R; ++ii){
					if(cell[ii][j] == '#'){
                        rad = 1;
                        break;
                    } else if (cell[ii][j] == '.'){
                        x[idx].push_back(ii);
                        y[idx].push_back(j);
                        cell[ii][j] = 'V';
                    } else if (cell[ii][j] == 'H' || cell[ii][j] == 'V'){
                        break;
                    }
				}
				// north
                for(int ii = i-1; ii>=1; --ii){
					if(cell[ii][j] == '#'){
                        rad = 1;
                        break;
                    } else if (cell[ii][j] == '.'){
                        x[idx].push_back(ii);
                        y[idx].push_back(j);
                        cell[ii][j] = 'V';
                    } else if (cell[ii][j] == 'H' || cell[ii][j] == 'V'){
                        break;
                    }
				}
                if(rad == 1){
                    //
                } else {
                    lose = 0;
                    dfs(idx+1);
                }
                while(!x[idx].empty()){
                    int xp = x[idx].back(); x[idx].pop_back();
                    int yp = y[idx].back(); y[idx].pop_back();
                    cell[xp][yp] = '.';
                }
				//impossible
				cell[i][j] = '.';
			}
		}
	}

    if(lose == 1){
        if (idx % 2 == 1) ans++;
        return 0;
    }
}

int main(){
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; ++i){
		scanf("%d %d", &R, &C);
		//
		ans = 0;
		for(int ii=0; ii<17; ++ii)
			for(int jj=0; jj<17; ++jj)
				cell[ii][jj] = 0;
		//
		for(int j=0; j<R; ++j){
			scanf("%s", &cell[j+1][1]);
		}
		//
        dfs(0);
		printf("Case #%d: %d\n", i, ans);
	}
	return 0;
}
