#include <stdio.h>




void foo(){
	int n;
	char c;

	scanf("%d\n", &n);

	char try[2*n -1];

	for (int i = 0; i < 2*n-2; i++){
		c = getchar();
		if (c == 'S')
			try[i] = 'E';
		else
			try[i] = 'S';
	}
	getchar();
	try[2*n-2] = '\0';
	printf("%s\n", try);

}







int main(int argc, char const *argv[])
{
	int tests;
	scanf("%d\n", & tests);
	for (int i = 1; i <= tests; i++)
		foo(i);
	return 0;
}