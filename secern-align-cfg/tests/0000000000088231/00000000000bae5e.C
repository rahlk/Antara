#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>

int main(void) {
	int t = 0;
	int i, j, count = 1;
	int a;
	int b, temp;
	char *str_a;
	char *str_b;
	int *n;
	
	
    while (t < 1 || t>100) {
    	scanf("%d", &t);
    	getchar();
    }
    n=(int *)malloc(sizeof(int)*t);
	for (i = 0; i<t; i++) {
	    scanf("%d", *(n+i));

		if (*(n+i) <= 1 || *(n+i)>(int)pow(10.0, 9.0)) {
			i--;
			continue;
        }
		while (count != 0) {
			count = 0;
			srand(time(NULL));
			
			temp=(rand() % (*(n+i)/2)));
			a = *(n+i)/2-temp;
			if(a<=0 || a>=*(n+i)) {
			    count++;
			    continue;
			}
			
			b = *(n+i)/2+temp;
            if(*(n+i)%2!=0)
                a++;
			sprintf(str_a, "%d", a);
			sprintf(str_b, "%d", b);

			for (j = 0; (j < strlen(str_a)); j++) {
				if ((*(str_a + j) - '0') == 4)
					count++;
			}
			for (j = 0; (j < strlen(str_b)); j++) {
				if ((*(str_b + j) - '0') == 4)
					count++;
			}
			if (a + b != *(n+i))
				count++;
		}
		printf("Case #%d: %d %d\n", i + 1, a, b);
		*str_a='\0';
		*str_b='\0';
	}


}