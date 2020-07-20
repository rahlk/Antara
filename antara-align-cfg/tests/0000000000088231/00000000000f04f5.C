#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define ENOUGH ((__CHAR_BIT__ * sizeof(int) - 1) / 3 + 2)

int find_four(int a, int b); 

int main() {
	int num_tests; 
	scanf("%d", &num_tests); 
	
	for (int i = 1; i <= num_tests; i++) {
		int a, b, n; 
		scanf("%d", &n); 
		
		a = n/2; 
		b = (n+1)/2; 
		
		while (find_four(a, b)) {
			int temp = b/2; 
			b -= temp; 
			a += temp; 
		}
		
		fprintf(stdout, "Case #%d: %d %d\n", i, a, b); 
	}
}

int find_four(int a, int b) {
	char a_str[ENOUGH], b_str[ENOUGH]; 
	sprintf(a_str, "%d", a); 
	sprintf(b_str, "%d", b); 
	
	for (int i = 0; i < strlen(a_str); i++) {
		if (a_str[i] == '4')
			return 1; 
	}
	for (int i = 0; i < strlen(b_str); i++) {
		if (b_str[i] == '4')
			return 1; 
	}
	
	return 0; 
}