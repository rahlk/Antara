#include <stdio.h>
#include <stdlib.h>

char my_path[100000];
char lynda_path[100000];

int main(){
	int T, N;
	scanf("%d", &T);

	for(int i=1; i<=T; ++i){
		int path_idx = 0;
		scanf("%d", &N);
		scanf("%s", lynda_path);
		while(path_idx < 2 * N - 2){
			if(lynda_path[path_idx] == 'E') my_path[path_idx] = 'S';
			else my_path[path_idx] = 'E';
			++path_idx;
		}
		my_path[path_idx] = '\0';
		printf("Case #%d: %s\n", i, my_path);
	}
	
	return 0;
}
