#if 01

#include<stdio.h>
#include<string.h>

int n;
int a, b;
char strN[11];

void getSol(void){
	sprintf(strN, "%d", n);
	//printf("%s\n", strN);
	int len = strlen(strN);
	for (int i = len - 1, j = 1; i >= 0; i--, j *= 10){
		if (strN[i] == '4')b += j;
	}
	a -= b;
}
int main(void){

	int T, tc;
	scanf("%d", &T);
	for (tc = 1; tc <= T; tc++){
		//input
		scanf("%d", &n);
		a = n; b = 0;
		//getSol
		getSol();
		//print
		printf("Case #%d: %d %d\n", tc, a, b);
		//init
	}
	return 0;
}

#endif