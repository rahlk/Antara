#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int cmpfunc(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}

int solve(int *I, int *T1, int*T2, int N) {
	int i, j;
	int n1, n2;

	for (i = 0, j=0; i < N ; i+=2, j++) {
		T1[j] = I[i];
		T2[j] = I[i + 1];
	}

	n2 = N/2;
	n1 = N-n2;

	qsort(T1, n1, sizeof(int), cmpfunc);
	qsort(T2, n2, sizeof(int), cmpfunc);

	for (i = 0, j = 0; i < N; i += 2, j++) {
		I[i] = T1[j];
		I[i + 1] = T2[j] ;
	}

	for (i = 0; i < N - 1; i++) {
		if (I[i + 1] < I[i]) {
			return i;
			}
		}
	return -1;
	}

main(int argc, char ** argv) {
	int a,i,j,n,L,D,N,NN,r,R,c,C,Kr,Kc,T;
	char p[256];





/*	fprintf(stderr,"argumentu: %i\n",argc);
	fflush(stdout);

	if(argc != 2 )	{
		fprintf (stderr,"at least one argument, please\n");
		exit (1);
	}

	FILE *f;
	if ( NULL == (f=fopen(argv[1],"r"))) {
		fprintf(stderr,"cant open file %s \n",argv[1]);
		exit(1);
	}

	fprintf(stderr,"file opened\n");
	fflush(stderr);
*/
	FILE *f = stdin;

	if ( 1 != (a = fscanf(f,"%i\n",&T))) {
		fprintf(stderr,"error reading N, only %i args provided\n",a);
		exit (1);
	}


	for (i=0 ; i<T; i++ ) {

		if ( 1 != (a = fscanf(f,"%i\n",&N))) {
			fprintf(stderr,"error reading N, only %i args provided in case: %i\n",a, i);
			exit (1);
		}
		NN = N;

		/*for (j = 0; j < N; j++) {
			if (1 != (a = fscanf(f, "%i ", A1+j))) {
				fprintf(stderr, "error reading V_%i, only %i args provided in case: %i\n", j, a, i);
				exit(1);
			}
		}*/


		//fprintf(stderr,"argumgens red: index:%i, D:%i, P:%s\n",i,D,p);
		fflush(stdout);

		/*n = solve(A1,A2,A3,N);

		if (n == -1) {
			printf("Case #%i: OK\n", i+1);
		} else {
			printf("Case #%i: %i\n", i+1, n);

		}
		*/

		int m=1, t;
		int o1=0, o2=0;

		while (N>0) {
			//o1 *= 10 ;
			//o2 *= 10 ;

			t = N % 10;

			if(t==4) {
				o1 += 1 * m ;
				o2 += 3 * m;
			} else {
				o1 += t * m;
			}

			m *= 10;
			N /= 10;
			//N = (N - (N % 10)) / 10;
		}

		printf("Case #%i: %i %i\n",1+i, o1, o2);


	}

	fclose(f);

}
