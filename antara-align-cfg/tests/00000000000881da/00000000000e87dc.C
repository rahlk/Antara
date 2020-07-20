#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int cmpfunc(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}

main(int argc, char ** argv) {
	int a,i,j,n,L,D,N,r,R,C,Kr,Kc,T;
	char str[60000],c;





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



			if (1 != (a = fscanf(f, "%s",str))) {
				fprintf(stderr, "error reading string, only %i args provided in case: %i\n", a, i);
				exit(1);
			}

			for(j=0; str[j]!=0; j++) {
				str[j] = (str[j]=='S')? 'E' : 'S' ;
			}



		//fprintf(stderr,"argumgens red: index:%i, D:%i, P:%s\n",i,D,p);
		fflush(stdout);

    	printf("Case #%i: %s\n", i+1, str);


	}

	fclose(f);

}
