#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main(void) {
	int T;
	scanf("%d", &T);
	int i,j, k,A;
	char C[256][501];
	for (i = 1; i <= T; i++) {
		int R_flag = 0;
		int P_flag = 0;
		int S_flag = 0;
		scanf("%d", &A);
		for (j = 0; j < A; j++) {
			scanf("%s", C[j]);
		}
		int check = 0;
		printf("Case #%d: ", i);
		char s[256] = "";

		for (j = 0; j < 500; j++) {
			
			R_flag = 0; P_flag = 0; S_flag = 0;
			for (k = 0; k < A; k++) {
				if (C[k][j] == 'R') R_flag = 1;
				else if (C[k][j] == 'P') P_flag = 1;
				else if (C[k][j] == 'S')S_flag = 1;
			}
			if ((R_flag == 1 && P_flag == 1) && S_flag == 1) { 
				printf("IMPOSSIBLE\n"); 
				check = 1;
				break;
			}
			else if (R_flag == 1 && P_flag == 1) strcat(s, "P");
			else if (R_flag == 1 && S_flag == 1) strcat(s, "R");
			else if (S_flag == 1 && P_flag == 1) strcat(s, "S");
			else if (R_flag == 1) strcat(s, "P");
			else if (S_flag == 1) strcat(s, "R");
			else if (P_flag == 1) strcat(s, "S");
		}
		if (check == 0) printf("%s\n", s);

	}
}