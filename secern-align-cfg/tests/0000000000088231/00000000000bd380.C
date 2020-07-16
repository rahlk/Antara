#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int abcd, i, d;
	long long l, tenpow[10], A, sol, r;

		tenpow[1] = 1;
		for( i = 2; i < 11; i++ ){
			tenpow[i] = tenpow[i-1]*10;
		}

		scanf("%d", &abcd);
		
		for( i = 0; i < abcd; i++ ){
			scanf("%lld", &l);
			A=l;
			d=1;
			sol=0;
			do{
				r=l%10;
				if(r==4){
					sol=sol+tenpow[d];
				}
				l=l/10;
				d++;
			}while( l !=0 );

			printf("Case #%d: %lld %lld\n", i+1, sol, A-sol);

		}

	return 0;
}