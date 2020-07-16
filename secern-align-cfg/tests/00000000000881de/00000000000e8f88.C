#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct F {
	int x;
	int y;
	int b;
} F;

F functions[2][1024];
int n, b, f, findex, nfunc[2];
char str1[1025];
char str2[1025];
int tc, t;
int i, j, k;
int blksize, blkcount, flag;
int ix, iy, ib;
int str2i, b2, remb, remvisible;

int main(int argc, char const *argv[]) {

	scanf("%d", &t);
	tc = 0;
	while(tc++ < t) {
		scanf("%d", &n);
		scanf("%d", &b);
		scanf("%d", &f);
		findex = 0;
		nfunc[findex] = 1;
		functions[findex][0].x = 0;
		functions[findex][0].y = n;
		functions[findex][0].b = b;
		str1[n] = 0;
		while(1) {
			flag = 0;
			for (i = 0; i < nfunc[findex]; ++i) {
				ix = functions[findex][i].x;
				iy = functions[findex][i].y;
				ib = functions[findex][i].b;
				if(ib == 0) { //all valid locations
					for (j = ix; j < iy; ++j) {
						str1[j] = '0';
					}
				} else if (ib == iy - ix) { //all invalid locations
					for (j = ix; j < iy; ++j) {
						str1[j] = '1';
					}
				} else {
					flag = 1;
					blksize = (ib > (iy-ix)/2) ? ((iy-ix+1)/2) : ib;
					for (j = 0; j < (iy-ix)/blksize; ++j) {
						for (k = 0; k < blksize; ++k) {
							str1[ix + j*blksize + k] = j%2 + '0';
						}
					}
					for (k = ix + j*blksize; k < iy; ++k) {
						str1[k] = j%2 + '0';
					}
				}
			}
			if(flag == 0) break;
			printf("%s\n", str1);
			scanf("%s", str2);

			nfunc[1 - findex] = 0;
			str2i = 0;
			for (i = 0; i < nfunc[findex]; ++i) {
				ix = functions[findex][i].x;
				iy = functions[findex][i].y;
				ib = functions[findex][i].b;
				if(ib == 0) { //all valid locations
					functions[1 - findex][nfunc[1 - findex]].x = ix;
					functions[1 - findex][nfunc[1 - findex]].y = iy;
					functions[1 - findex][nfunc[1 - findex]].b = ib;
					nfunc[1 - findex]++;
					str2i += iy - ix;
				} else if (ib == iy - ix) { //all invalid locations
					functions[1 - findex][nfunc[1 - findex]].x = ix;
					functions[1 - findex][nfunc[1 - findex]].y = iy;
					functions[1 - findex][nfunc[1 - findex]].b = ib;
					nfunc[1 - findex]++;
				} else {
					blksize = (ib > (iy-ix)/2) ? ((iy-ix+1)/2) : ib;
					remb = ib;
					remvisible = iy - ix - ib;
					for (j = 0; j < (iy-ix)/blksize; ++j) {
						b2 = 0;
						for (k = 0; (k < blksize) && remvisible; ++k) {
							if(str2[str2i] && (str2[str2i] == j%2 + '0')) {
								b2++;
								remvisible--;
								str2i++;
							} else break;
						}
						functions[1 - findex][nfunc[1 - findex]].x = ix + j*blksize;
						functions[1 - findex][nfunc[1 - findex]].y = ix + (j+1)*blksize;
						functions[1 - findex][nfunc[1 - findex]].b = blksize - b2;
						nfunc[1 - findex]++;
						remb -= blksize - b2;
					}
					if(ix + j*blksize < iy) {
						k = 0;
						functions[1 - findex][nfunc[1 - findex]].x = ix + j*blksize;
						functions[1 - findex][nfunc[1 - findex]].y = iy;
						functions[1 - findex][nfunc[1 - findex]].b = 0;
						if(remb) {
							while(remvisible && str2[str2i] && (str2[str2i] == j%2 + '0')) {
								k++;
								str2i++;
							}
							functions[1 - findex][nfunc[1 - findex]].b = iy - (ix + j*blksize) - k;
						} else str2i += iy - (ix + j*blksize);
						nfunc[1 - findex]++;
					}
				}
			}

			findex = 1 - findex;
		}

		for (i = 0; i < n; ++i) {
			if(str1[i] == '1') printf("%d ", i);
		}
		printf("\n");
		scanf("%s", str2);
	}
	return 0;
}

/*
5, 2, 10 into n, b, f
01101 111
00110 010
01010 100
11010 100
0 3

5, 2, 10 into n, b, f
00011 001
00101 011
01101 111
0 3

  t = readline_int()           // Reads 2 into t
  n, b, f = readline_int_list()  // Reads 5, 2, 10 into n, b, f
  printline 01101 to stdout    // The next four outputs match the example in
                               // the problem statement.
  flush stdout
  response = readline_str()    // Reads 111 into response. (At this point, we
                               // could determine the answer; the remaining
                               // queries are just examples!)
  printline 00110 to stdout
  flush stdout
  response = readline_str()    // Reads 010 into response
  printline 01010 to stdout
  flush stdout
  response = readline_str()    // Reads 100 into response
  printline 11010 to stdout
  flush stdout
  response = readline_str()    // Reads 100 into response
  printline 0 3 to stdout      // Guesses the answer. Notice that we were
                               // not required to use all 10 of our allowed
                               // queries.
  flush stdout
  verdict = readline_int()     // Reads 1 into verdict. We got that test case
                               // right!
  n, b, f = readline_int_list()  // Reads 2, 1, 10 into n, b, f.
  printline 01 to stdout       // 01 is a query, not a guess at the final
                               // answer (if we wanted to guess that just
                               // worker 1 were broken, we would have to
                               // send 1 as we do below)
  flush stdout
  response = readline_str()    // Reads 1 into response.
  printline 1 to stdout        // Makes a (bad) wild guess.
  verdict = readline_str()     // Reads -1 into verdict.
  exit                         // exits to avoid an ambiguous TLE error
*/
