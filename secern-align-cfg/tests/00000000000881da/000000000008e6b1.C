#include <stdio.h>

char fp[100000];
char ans[100000];
int N, T;

void get_ans()
{
	int i;
	for ( i=0; i<N*2-2; i++ ) {
		if ( fp[i] == 'E' )
			ans[i] = 'S';
		else
			ans[i] = 'E';
	}
	ans[N*2-2] = '\0';
}

int main()
{
	int i;
	
	scanf( "%d", &T );
	for ( i=0;i<T;i++ ) {
		scanf( "%d", &N );
		scanf( "%s", fp );
		get_ans();
		printf("Case #%d: %s\n", i+1, ans);
	}
}

