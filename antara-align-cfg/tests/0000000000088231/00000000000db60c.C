
#include <stdio.h>
char value[1024 * 1024 * 1024];
int main() {
	int testcase = 1,testcase1= 1;
	scanf("%d\n", &testcase);
	while (testcase > 0) {
		long ch = 0, ch1 = 0;
		printf("Case #%d: ", testcase1);
		do
		{
			scanf("%c", &value[ch]);
			ch++;
		} while (value[(ch-1)] != '\n');
        ch--;
		int loop = 0;
		while (loop < ch) {
			printf("%c", value[loop] == '4' ? '3' : value[loop]);
			if (value[loop]=='4')
			    value[loop] = '1';
			else
			    value[loop] = '0';
			loop++;
		}
		printf(" ");
		loop = 0;
		int noZero = 0;
		while (loop < ch) {
		    if (value[loop] != '0')
		        noZero = 1;
		    if (noZero == 1)
			    printf("%c", value[loop] == '4' ? '1' : value[loop]);
			loop++;
		}
		printf("\n");
		testcase--;
		testcase1++;
	}

}