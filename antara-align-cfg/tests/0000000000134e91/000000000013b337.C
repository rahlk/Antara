#include <stdio.h>

int A[25], Al;
int B[25], Bl;
int C[25], Cl;
int D[25], Dl;
int E[25], El;
int X[25], Xl;
char solution[6];
int chk[5];

int main(void) {

	int T, F, i;
	char in[2];
	
	scanf ("%d %d", &T, &F);
	
	while (T--) {
		
		Al = Bl = Cl = Dl = El = 0;
		
		for (i = 1; i <= 595; i += 5) {
			
			printf ("%d\n", i);
			fflush (stdout);
			scanf ("%s", in);
			
			switch (*in) {
				case 'A': A[Al++] = i; break;
				case 'B': B[Bl++] = i; break;
				case 'C': C[Cl++] = i; break;
				case 'D': D[Dl++] = i; break;
				case 'E': E[El++] = i; break;
			}
		}

		if (Al == 23) { for (i = 0; i < Al; i++) X[i] = A[i]; Xl = Al; solution[0] = 'A'; }
		if (Bl == 23) { for (i = 0; i < Bl; i++) X[i] = B[i]; Xl = Bl; solution[0] = 'B'; }
		if (Cl == 23) { for (i = 0; i < Cl; i++) X[i] = C[i]; Xl = Cl; solution[0] = 'C'; }
		if (Dl == 23) { for (i = 0; i < Dl; i++) X[i] = D[i]; Xl = Dl; solution[0] = 'D'; }
		if (El == 23) { for (i = 0; i < El; i++) X[i] = E[i]; Xl = El; solution[0] = 'E'; }
		
		Al = Bl = Cl = Dl = El = 0;
		
		for (i = 0; i < Xl; i++) {

			printf ("%d\n", X[i] + 1);
			fflush (stdout);
			scanf ("%s", in);
			
			switch (*in) {
				case 'A': A[Al++] = X[i] + 1; break;
				case 'B': B[Bl++] = X[i] + 1; break;
				case 'C': C[Cl++] = X[i] + 1; break;
				case 'D': D[Dl++] = X[i] + 1; break;
				case 'E': E[El++] = X[i] + 1; break;
			}
		}
		
		if (Al == 5) { for (i = 0; i < Al; i++) X[i] = A[i]; Xl = Al; solution[1] = 'A'; }
		if (Bl == 5) { for (i = 0; i < Bl; i++) X[i] = B[i]; Xl = Bl; solution[1] = 'B'; }
		if (Cl == 5) { for (i = 0; i < Cl; i++) X[i] = C[i]; Xl = Cl; solution[1] = 'C'; }
		if (Dl == 5) { for (i = 0; i < Dl; i++) X[i] = D[i]; Xl = Dl; solution[1] = 'D'; }
		if (El == 5) { for (i = 0; i < El; i++) X[i] = E[i]; Xl = El; solution[1] = 'E'; }
		
		Al = Bl = Cl = Dl = El = 0;
		
		for (i = 0; i < Xl; i++) {

			printf ("%d\n", X[i] + 1);
			fflush (stdout);
			scanf ("%s", in);
			
			switch (*in) {
				case 'A': A[Al++] = X[i] + 1; break;
				case 'B': B[Bl++] = X[i] + 1; break;
				case 'C': C[Cl++] = X[i] + 1; break;
				case 'D': D[Dl++] = X[i] + 1; break;
				case 'E': E[El++] = X[i] + 1; break;
			}
		}
		
		if (Al == 1) { X[0] = A[0]; solution[2] = 'A'; }
		if (Bl == 1) { X[0] = B[0]; solution[2] = 'B'; }
		if (Cl == 1) { X[0] = C[0]; solution[2] = 'C'; }
		if (Dl == 1) { X[0] = D[0]; solution[2] = 'D'; }
		if (El == 1) { X[0] = E[0]; solution[2] = 'E'; }

		printf ("%d\n", X[0] + 1);
		fflush (stdout);
		scanf ("%s", in);

		for (i = 0; i < 5; i++) chk[i] = 0;

		solution[4] = *in;
		chk[solution[4] - 'A'] = 1;
		for (i = 0; i < 3; i++) chk[solution[i] - 'A'] = 1;

		for (i = 0; i < 5; i++) if (!chk[i]) solution[3] = i + 'A';
		
		puts (solution);
		fflush (stdout);
		scanf ("%s", in);
		if (*in == 'N') break;
	}
	
	return 0;
}
