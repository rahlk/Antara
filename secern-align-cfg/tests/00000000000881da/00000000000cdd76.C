#include <stdio.h>
#include <queue>
#include <stack>
#include <utility>
using namespace std;

int main() {
	int t; scanf("%d",&t);
	
	for(int i=0;i<t;i++) {
		int n; scanf("%d",&n);
		char path[2000];
		scanf("%s",path);
		
		int map[n][n]={0,};
		
		int l = 0;
		int a = 0;
		int b = 0;
		
		for(int k=0;k<n;k++) {
			for(int j=0;j<n;j++) {
				map[k][j] = 0;
			}
		}
		map[0][0] = 1;
		while(path[l] != '\0') {
			if(path[l] == 'E') 
				map[a][++b] = (++l)+1;
			else map[++a][b] = (++l)+1;
		}
		
		
		char answer[2000];
		
		int dfs[n][n];
		for(int k=0;k<n;k++) {
			for(int j=0;j<n;j++) {
				dfs[k][j] = 0;
			}
		}
		
		
		stack<pair<int, int> > stack;
		pair<int, int> p = make_pair(0,0);
		stack.push(p);
		pair<int, int> current;
		pair<int, int> previous;
 		current = stack.top();
		
		while(!(current.first==n-1&&current.second==n-1)) {
			previous = current;
		
			current = stack.top();
			stack.pop();
		
			
			if(previous.first+1 == current.first) answer[dfs[previous.first][previous.second]-1] = 'S';
			else if(previous.second+1 == current.second) answer[dfs[previous.first][previous.second]-1] = 'E';
			
			dfs[current.first][current.second] = dfs[previous.first][previous.second]+1;
			
					
			if(current.first+1<n && !(map[current.first][current.second]!=0&&map[current.first+1][current.second]!=0))
					stack.push(make_pair(current.first+1, current.second));
					
			if(current.second+1<n && !(map[current.first][current.second]!=0&&map[current.first][current.second+1]!=0))
					stack.push(make_pair(current.first, current.second+1));
		}	
			
		
		for(int j=0;j<8;j++) printf("%c",answer[j]);
		printf("\n");
		
	}
}