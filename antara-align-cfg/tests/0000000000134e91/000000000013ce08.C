#include <stdio.h>
#include <stdlib.h>

int possibles[120];
char A[120];
int l_count[5];
char sol[6];
int factorials[6];

int main(int argc, char *argv[]){
	int abcd, iii, i, k, j, F;
	char kk;
	scanf("%d", &abcd);
	scanf("%d", &F);
	factorials[0] = 1;
	for(int i = 1; i<6; i++){
		factorials[i] = factorials[i-1]*i;
		//printf("%d\n", factorials[i]);
	}

	
	for( iii = 0; iii < abcd; iii++ ){
		for(int i = 0; i<119; i++){
			possibles[i] = i+1;
		}
		for(k=1; k<=3; k++){
			for(i = 0; i<5; i++) l_count[i] = 0;
			for(i = 0; i<factorials[5-k+1]-1; i++){
				printf("%d\n", (possibles[i]-1)*5+k);
				fflush(stdout);
				scanf("%c", &A[i]);
				while(A[i]!='A'&&A[i]!='B'&&A[i]!='C'&&A[i]!='D'&&A[i]!='E'){
					scanf("%c", &A[i]);
				}
				l_count[A[i]-'A']++;
			}
			for(int i = 0; i<5; i++){
				//printf("%d\n", l_count[i]);
				if(l_count[i] == factorials[5-k]-1){
					sol[k-1] = i+'A';
				}
			}
			j = 0;
			for(i = 0; i<factorials[5-k+1]-1; i++){
				if(A[i] == sol[k-1]){
					possibles[j] = possibles[i];
					j++;
				}
			}
		}
		printf("%d\n", (possibles[0]-1)*5+4);
		fflush(stdout);
		scanf("%c", &kk);
		if(kk=='\n' || kk==' '){
			scanf("%c", &kk);
		}
		sol[4] = kk;
		sol[3] = sol[0];
		for(i = 0; i<5; i++) l_count[i] = 0;
		for(i = 0; i<5; i++) l_count[sol[i]-'A']++;
		for(i = 0; i<5; i++) if(l_count[i]==0) sol[3]=i+'A';
		sol[5] = '\0';
		printf("%s\n", sol);
		fflush(stdout);
		scanf("%c", &kk);
		while(kk!='Y' && kk!='N'){
			scanf("%c", &kk);
		}
	}
	return 0;
}