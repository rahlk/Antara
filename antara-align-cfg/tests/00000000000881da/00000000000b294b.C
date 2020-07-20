#include <stdio.h>
#include <math.h>
#include <string.h>

void negate(char* dir, int size){
	for(int i =0; i< size; ++i){
		switch(dir[i]){
			case 'S':
				dir[i] = 'E';
				break;
			case 'E':
				dir[i] = 'S';
				break;
		}
	}
}

int main(){
    int n_cases, case_num = 1;
    scanf("%d", &n_cases);
    while(case_num<=n_cases){
        int size;
        scanf("%d", &size);
		char buff[(2*size)-1];
		scanf("%s", buff);
		negate(buff, (2*size)-1);
        printf("Case #%d: %s\n", case_num, buff);
		++case_num;
    }
}