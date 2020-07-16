#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int T;
	scanf("%d", &T);
	for(int i=1; i<=T; ++i){
		int A;
		scanf("%d", &A);
		char program[255][1000] = {0,};
		for(int j=0; j<A; ++j){
			scanf("%s", program[j]);
		}
		int flag[255] = {0,};
		char ans[1000] = {0,}; 
		int possible = 0;
		//
		int idx = 0;
		while(1){
			for(int j=0; j<A; ++j){
				int pass = 0;
				int len = strlen(program[j]);
				int module_idx = idx;
				for(int k=0; k<idx; ++k){
					int mod_k = k;
					if (mod_k >= len) mod_k %= len;
					if(ans[k] == 'R' && program[j][mod_k] == 'S') {
						pass = 1; break;
					} else if(ans[k] == 'S' && program[j][mod_k] == 'P'){
						pass = 1; break;
					} else if(ans[k] == 'P' && program[j][mod_k] == 'R'){
						pass = 1; break;
					}
				}
				if(pass == 1) continue;
				if (module_idx >= len) module_idx %= len;
				flag[program[j][module_idx]] = 1;
			}
			if(flag['R'] == 1 && flag['S'] == 1 && flag['P'] == 1){
				possible = 0;
				break;
			}
			if(flag['S'] == 0 && flag['P'] == 0){
				ans[idx++] = 'P';
				ans[idx] = '\0';
				possible = 1;
				break;
			} else if(flag['S'] == 0 && flag['R'] == 0){
				ans[idx++] = 'S';
				ans[idx] = '\0';
				possible = 1;
				break;
			} else if(flag['P'] == 0 && flag['R'] == 0){
				ans[idx++] = 'R';
				ans[idx] = '\0';
				possible = 1;
				break;
			}
			if(flag['S'] == 0) ans[idx] = 'P';
			else if (flag['R'] == 0) ans[idx] = 'S';
			else if (flag['P'] == 0) ans[idx] = 'R';
			++idx;
			flag['R'] = flag['S'] = flag['P'] = 0;
		}
		//
		if (possible == 1){
			printf("Case #%d: %s\n", i, ans);
		} else {
			printf("Case #%d: IMPOSSIBLE\n", i);
		}
	}
	return 0;
}
