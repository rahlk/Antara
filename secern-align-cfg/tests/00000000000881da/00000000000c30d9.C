#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	int T, n;
	char str[150000];
	scanf("%d", &T);
	for(int i=1;i<=T;i++) {
		scanf("%d", &n);
		scanf("%s", str);
		printf("Case #%d: %c", i, str[0]== 'S'? 'E':'S');
		for (int j = 1; j < 2*n-2; j++) {
			if (str[j] == 'S') printf("E");
			else printf("S");
		}
		printf("\n");
	}
}