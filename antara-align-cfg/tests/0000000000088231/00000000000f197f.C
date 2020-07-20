#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define ENOUGH ((__CHAR_BIT__ * sizeof(int) - 1) / 3 + 2)

int find_four(long long a, long long b); 

int main() {
	int num_tests; 
	scanf("%d", &num_tests); 
	int tests[num_tests+1]; 
	for (int i = 1; i <= num_tests; i++) {
		long long n; 
		scanf("%llu", &n); 
		tests[i] = n; 
	}
	
	for (int i = 1; i <= num_tests; i++) {
		long long a, b; 
		long long n = tests[i]; 
		
		a = n/2; 
		b = (n+1)/2; 
		
		long long temp = 0; 
		while (find_four(a, b)) {
			temp = b/2; 
			b -= temp; 
			a += temp; 
		}
		
		fprintf(stdout, "Case #%d: %llu %llu\n", i, a, b); 
	}
}

int find_four(long long a, long long b) {
	char a_str[100], b_str[100]; 
	sprintf(a_str, "%llu", a); 
	sprintf(b_str, "%llu", b); 
	
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