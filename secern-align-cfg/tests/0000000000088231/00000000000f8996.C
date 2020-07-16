#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h> 

#define SIZE 105

int main() {
	int num_tests; 
	scanf("%d", &num_tests); 
	char tests[num_tests+1][SIZE]; 
	for (int i = 1; i <= num_tests; i++) {
		scanf("%s", tests[i]); \
	}
	
	for (int i = 1; i <= num_tests; i++) {
		char a_str[SIZE]; 
		char b_str[SIZE]; 
		strcpy(a_str, tests[i]); 
		
		for (int j = 0; j < strlen(a_str); j++) {
			b_str[j] = '0'; 
		}
		b_str[strlen(a_str)] = '\0'; 
		
		for (int j = 0; j < strlen(a_str); j++) {
			if (a_str[j] == '4') {
				a_str[j] = '3'; 
				b_str[j] = '1'; 
			}
		}
		char *out_b; 
		out_b = b_str; 
		for (int j = 0; j < strlen(a_str); j++) {
			if (b_str[j] != '0') {
				out_b = &b_str[j]; 
				break; 
			}
		}
		fprintf(stdout, "Case #%d: %s %s\n", i, a_str, out_b); 
	}

}
