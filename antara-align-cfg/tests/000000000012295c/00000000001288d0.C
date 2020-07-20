#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXT 100
#define MAXQ 10000
#define MAXP 500

int T, P;
long int Q;
int sol[MAXQ + 1][MAXQ + 1];
char q[MAXP];
int qx[MAXP];
int qy[MAXP];

int main()
{
    int t;
    int i, j, k, l;
    scanf("%d", &T);

    //printf("T=%d\n", T);

    t = 0;
    while (t < T) {

	scanf("%d", &P);
	scanf("%ld", &Q);

	//printf("P=%d Q=%ld\n", P, Q);

	for (i = 0; i <= Q; i++) {
	    for (j = 0; j <= Q; j++) {
		sol[i][j] = 0;
	    }
	}


	for (i = 0; i < P; i++) {
	    int x;
	    int y;
	    char s[2];
	    s[0] = s[1] = 0;

	    scanf("%d %d %s\n", &x, &y, s);
	    //printf("%d,%d %s\n", x, y, s);

	    //scanf("%c", q + i);
	    //scanf("%c\n", &c);
	    //printf("%c\n", c);

	    qx[i] = x;
	    qy[i] = y;
	    q[i] = s[0];
	    
	}
#if 0
	for (i = 0; i <= Q; i++) {
	    for (j = 0; j <= Q; j++) {
		printf("%c", p[i][j]);	
	    }
	    printf("\n");
	}
#endif

	for (i = 0; i < P; i++) {
	    switch(q[i]) {
		case 'N':
		    for (k = 0; k <= Q; k++) {
			for (l = qy[i] + 1; l <= Q; l++) {
			    sol[k][l]++;
			}
		    }
		    break;
		case 'S':
		    for (k = 0; k <= Q; k++) {
			for (l = 0; l < qy[i]; l++) {
			    sol[k][l]++;
			}
		    }
		    break;
		case 'E':
		    for (k = qx[i] + 1; k <= Q; k++) {
			for (l = 0; l <= Q; l++) {
			    sol[k][l]++;
			}
		    }
		    break;
		case 'W':
		    for (k = 0; k < qx[i]; k++) {
			for (l = 0; l <= Q; l++) {
			    sol[k][l]++;
			}
		    }
		    break;
	    }
#if 0
	    printf("\nsol:\n");
	    for (k = 0; k <= Q; k++) {
		for (l = 0; l <= Q; l++) {
		    printf("%d", sol[k][l]);	
		}
		printf("\n");
	    }
#endif
	}

	int max, maxi, maxj;

	max = 0;
	for (i = 0; i <= Q; i++) {
	    for (j = 0; j <= Q; j++) {
		if (sol[i][j] > max) {
		    max = sol[i][j];
		    maxi = i;
		    maxj = j;
		}
	    }
	}

	printf("Case #%d: %d %d\n", t + 1, maxi, maxj);

	t++;
    }

    return 0;
}