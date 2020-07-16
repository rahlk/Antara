#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int T,N,G;
char *gwork;

int calc_rest()
{
	int i, rest = 0;
	for ( i=1;i<=G;i++ ) {
		if ( gwork[i] == 0 )
			rest++;
	}
	return rest;
}

void set_1s(int pnum, int r)
{
	int i, n = 0;
	for ( i=1;i<=G;i++ ) {
		if ( pnum*n+r == i ) {
#if 0
			if ( gwork[i] == 0 ) {
				printf( "set_1s: %d %d: %d\n", pnum, r, i );
			}
#endif
			n++;
		}
		else
			gwork[i] = 1;
	}
}

void put_answer()
{
	int i;
	for ( i=1;i<=G;i++ ) {
		if ( gwork[i] == 0 ) {
			printf( "%d\n", i );
			fflush( stdout );
			break;
		}
	}
	scanf( "%d", &i );
}

void main_routine()
{
	int i, j, ctr = 0;
	int pnum[7] = {2,3,5,7,11,13,17};
	int r, val;
	
	for ( i=0;i<=N;i++ ) {
		for ( j=0;j<18;j++ )
			printf("%d ",pnum[ctr]);
		printf("\n");
		fflush( stdout );
		r = 0;
		for ( j=0;j<18;j++ ) {
			scanf( "%d", &val );
			r += val;
		}
		r = r % pnum[ctr];
		set_1s( pnum[ctr],r );
		ctr++;
		if ( ctr == 7 )
			ctr = 0;
#if 0
		printf( "calc_rest = %d\n", calc_rest() );
#endif
		if ( calc_rest() == 1 )
			break;
	}
	put_answer();
}

int main()
{
	int i;
	
	scanf( "%d",&T );
	for ( i=0;i<T;i++ ) {
		scanf("%d %d", &N, &G);
		printf("1\n");
		fflush( stdout );
	}
}
