#include <stdio.h>
#include <stdlib.h>

char my_path[100000];
char my_ES_cnt[256];
char lynda_path[100000];
char lynda_ES_cnt[256];

int main(){
	int T, N;
	scanf("%d", &T);

	for(int i=1; i<=T; ++i){
		int my_path_idx = 0;
		int lynda_path_idx = 0;
		lynda_ES_cnt['E'] = lynda_ES_cnt['S'] = my_ES_cnt['E'] = my_ES_cnt['S'] = 0;
		scanf("%d", &N);
		scanf("%s", lynda_path);
		
		while(1){
			if(lynda_ES_cnt['E'] == my_ES_cnt['E'] && lynda_ES_cnt['S'] == my_ES_cnt['S']){
				if(lynda_path[lynda_path_idx] == 'E') {
					my_path[my_path_idx] = 'S';
					++my_ES_cnt['S'];
				} else { 
					my_path[my_path_idx] = 'E';
					++my_ES_cnt['E'];
				}
			} else {
				if(my_ES_cnt['E'] >= N-1){
					my_path[my_path_idx] = 'S';
					++my_ES_cnt['S'];
				} else if (my_ES_cnt['S'] >= N-1){
					my_path[my_path_idx] = 'E';
					++my_ES_cnt['E'];
				} else {
					if (my_ES_cnt['E'] >= my_ES_cnt['S']){
						my_path[my_path_idx] = 'S';
						++my_ES_cnt['S'];
					} else {
						my_path[my_path_idx] = 'E';
						++my_ES_cnt['E'];
					}
				}
			}
			++my_path_idx;
			++lynda_path_idx;
			if(my_path_idx == 2 * N - 2){
				my_path[my_path_idx] = '\0';
				break;
			}
		}

		printf("Case #%d: %s\n", i, my_path);
	}
	
	return 0;
}
