#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[]) {
	uint32_t T, case_no;
	uint32_t N,i;
	char P;
	fscanf(stdin, "%u", &T);
	for (case_no = 1; case_no <= T; case_no++) {
		fscanf(stdin,"%u", N);
		fprintf(stdout, "Case #%u: ", case_no);
        for(i=0;i<N;i++){
            fscanf(stdin,"%c",&P);
            if(P=='E')
                fprintf(stdout,"S");
            else
                fprintf(stdout,"E");
        }
        fprintf(stdout, "\n");
		//fprintf(stdout, "Case #%u: \n", case_no);
	}
	return 0;
}