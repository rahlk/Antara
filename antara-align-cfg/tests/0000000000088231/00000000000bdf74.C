#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>

int main(void) {
	int t;
	unsigned int n;
	int i, j, count = 1;
	int a;
	int b;
	int temp;
	char *str_a;
	char *str_b;
	
    scanf("%d", &t);
	while (t < 1 || t>100) {
		
		scanf("%d", &t);
		getchar();
	}

	for (i = 0; i<t; i++) {
		
		scanf("%d", &n);
		getchar();
		
	    str_a=(char *)malloc(sizeof(char)*n);
	    str_b=(char *)malloc(sizeof(char)*n);
		
		if (n <= 1 || n>(int)pow(10.0, 9.0))
			return 0;

		while (count!=0) {
			count = 0;
			srand(time(NULL));
			temp = (rand() % (n / 2));
			if (n % 2 != 0)
				temp++;
			a = n / 2 - temp;
			b = n / 2 + temp;
			

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
			if(a+b!=n)
			    count++;
		}
		printf("Case #%d: %d %d\n", i+1, a, b);
	}

	
}