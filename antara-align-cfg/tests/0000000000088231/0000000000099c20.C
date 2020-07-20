#include <stdio.h>

void foo(int caseNumber){

	char a[101];
	char b[101];
	int index = 0;
	char c;

	c = getchar();

	while (c != '\n' && c != 0){
		if (c == '4'){
			b[index] = '1';
			a[index] = '3';
		} else {
			a[index] = c;
			b[index] = '0';
		}

		index++;
		c = getchar();
	}
	a[index] = '\0';
	b[index] = '\0';
	char* bbbeg = b;

	while (*bbbeg == '0')
		bbbeg++;

	printf("Case #%d: %s %s\n", caseNumber, a, bbbeg);


}



int main(int argc, char const *argv[])
{
	/* code */

	int tests;
	scanf("%d\n", &tests);
	for (int i = 1; i <= tests; i++)
		foo(i);


	return 0;
}