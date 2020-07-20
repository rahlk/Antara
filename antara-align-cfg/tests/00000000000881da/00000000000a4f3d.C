#include<stdio.h>
#define SIZE 50004

int main()
{
	int T;
	int Case;
	int N;
	char S[2*SIZE];
	int i;
	//freopen("input.txt", "r", stdin);
	scanf("%d", &T);
	for (Case=1; Case<=T; Case++) {
		scanf("%d", &N);
		scanf("%s", S);
		printf("Case #%d: ", Case);
		for (i=0; i<S[i]; i++) {
			if ('S' == S[i])
				printf("E");
			else
				printf("S");
		}
		printf("\n");
	}
	return 0;
}
