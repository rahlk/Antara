#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>

int main(void) {
	int t = 0;
	int i, j, count = 1;
	int a;
	int b;
	char *str_a;
	char *str_b;

	t=3;
    int n[3]={4, 940, 4444};
	for (i = 0; i<t; i++) {
	    str_a=(char *)malloc(sizeof(char)*n[i]);
	    str_b=(char *)malloc(sizeof(char)*n[i]);
		
		if (n[i] <= 1 || n[i]>(int)pow(10.0, 9.0))
			return 0;

		while (count!=0) {
			count = 0;
			srand(time(NULL));
			a = (rand()%n[i])+1;
			b = (rand()%n[i])+1;

			sprintf(str_a, "%d", a);
			sprintf(str_b, "%d", b);

			for (j = 0; (j < strlen(str_a)); j++) {
				if ((*(str_a + j) - '0') == 4)
					count++;
			}
			for (j = 0; (j < strlen(str_b)); j++) {
				if ((*(str_b+ j) - '0') == 4)
					count++;
			}
			if (a + b == n[i])
				count++;
		}
		printf("Case # %d: %d %d\n", i+1, a, b);
	}

	
}