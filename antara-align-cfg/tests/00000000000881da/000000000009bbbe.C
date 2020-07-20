#include <stdio.h>

void foo(){
	int n;
	char c;

	scanf("%d\n", &n);

	char try[2*n - 1];
	char lyd[2*n - 1];

	for (int i = 0; i < 2*n-2; i++){
		c = getchar();
		lyd[i] = c;
		if (c == 'S')
			try[i] = 'E';
		else
			try[i] = 'S';
	}
	getchar();
	try[2*n-2] = '\0';

	for(int i = 0; i < 2*n -2; i++){
		if (lyd[i] == try[i]){
			char change = try[i];
			int j = i+1;
			while (j < 2*n -2){
				if (try[j] != change && lyd[j] != change){
					try[i] = try[j];
					try[j] = change;
					break;
				}
				j++;
			}
		}
	}

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