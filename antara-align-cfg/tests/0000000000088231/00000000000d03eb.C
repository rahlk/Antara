#include <stdio.h>
#include <string.h>
#include <math.h>

#define T_MAX 1000

int main(){
	int T;
	scanf("%d", &T);
	unsigned long cases[T];
	for(int t = 0; t < T; t++){
		scanf("%lu", &cases[t]);
	}
	int ans[T][2];
	for(int prova = 0; prova < T; prova++){
		char str[T_MAX + 1];
		sprintf(str, "%lu", cases[prova]);
		int a_str[strlen(str)];
		for(int pos = 0; pos < strlen(str); pos++){
			if(str[pos] == '4')
				a_str[pos] = 1;
			else
				a_str[pos] = 0;			
		}
		ans[prova][0] = 0;
		ans[prova][1] = 0;
		for(int k = 0; k < strlen(str); k++){
			ans[prova][0] = ans[prova][0] + (a_str[k])*(pow(10, strlen(str)-1-k));
		}
		ans[prova][1] = cases[prova] - ans[prova][0];
	}
	for(int n = 0; n < T; n++){
		printf("case %d: %d %d\n", n+1, ans[n][0], ans[n][1]);	
	}
}
