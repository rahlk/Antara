#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define ENOUGH ((__CHAR_BIT__ * sizeof(int) - 1) / 3 + 2)

int find_four(long a, long b); 

int main() {
	int num_tests; 
	scanf("%d", &num_tests); 
	int tests[num_tests+1]; 
	for (int i = 1; i <= num_tests; i++) {
		long n; 
		scanf("%lu", &n); 
		tests[i] = n; 
	}
	
	for (int i = 1; i <= num_tests; i++) {
		long a, b; 
		long n = tests[i]; 
		
		a = n/2; 
		b = (n+1)/2; 
		
		while (find_four(a, b)) {
			b -= 1; 
			a += 1; 
		}
		
		fprintf(stdout, "Case #%d: %lu %lu\n", i, a, b); 
	}
}

int find_four(long a, long b) {
	char a_str[100], b_str[100]; 
	sprintf(a_str, "%lu", a); 
	sprintf(b_str, "%lu", b); 
	
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