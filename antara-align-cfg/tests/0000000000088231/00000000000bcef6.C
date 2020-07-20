#include<bits/stdc++.h>

int main(int argc, char *argv[]) {
	uint32_t T, case_no;
	uint32_t len, i,b_len;
	char N[1024], A[1024], B[1024];
	fscanf(stdin, "%u", &T);
	for (case_no = 1; case_no <= T; case_no++) {
		fscanf(stdin, "%s", N);
		len = strlen(N);
		b_len = 0;
		for (i = 0; i < len; i++) {
			if (N[i] == '4') {
				A[i] = '2';
				B[b_len++] = '2';
			}
			else {
				A[i] = N[i];
				if (b_len > 0)
					B[b_len++] = '0';
			}
		}
		A[len] = '\0';
		B[b_len] = '\0';
		fprintf(stdout, "Case #%u: %s %s\n", case_no,A,B);
	}
	return 0;
}