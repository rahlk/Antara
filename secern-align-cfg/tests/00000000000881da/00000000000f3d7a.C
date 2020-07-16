#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main() {
	int num_tests; 
	scanf("%d", &num_tests); 
	
	int size[num_tests+1]; 
	char tests[num_tests+1][50000]; 
	
	for (int i = 1; i <= num_tests; i++) {
		scanf("%d", &size[i]); 
		scanf("%s", tests[i]); 
	}
	
	for (int i = 1; i <= num_tests; i++) {
		char output[size[i]]; 
		output[0] = '\0'; 
		
		for (int j = 0; j < strlen(tests[i]); j++) {
			if (tests[i][j] == 'S')
				strcat(output, "E"); 
			else
				strcat(output, "S"); 
		}
		
		fprintf(stdout, "Case #%d: %s\n", i, output); 
	}

	return 0; 
}