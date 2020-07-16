#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//#define DBG_ALEX


int T;
int N, L;

//#define NMAX 100
#define NMAX 50000


typedef int TYPE;
#define EXCHANGE(a, b) { TYPE tmp = a; a = b; b = tmp; }

#define LMAX 100
TYPE v[LMAX];
//TYPE A[NMAX][NMAX];
char path[NMAX + 10];
int pathLen;
int pathDeltas[NMAX];
//
char pathRes[NMAX + 10];
int pathResLen = 0;

#define MIN(a, b) (a > b ? b : a)




void Solve() {
    /*
    From https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881da
    */
    int i;
    int r, c;

    pathRes[pathLen] = 0;

    int crtPathDelta = 0;
    pathDeltas[0] = 0;
    //
    char crtMoveRes = path[0]; //
    char opposite[256];
    opposite['E'] = 'S';
    opposite['S'] = 'E';


    r = c = 0;
    for (i = 0; i < 2 * N - 2; i++) {
        if (path[i] == 'E') {
            c++;
        }
        else
        if (path[i] == 'S') {
            r++;
        }
      #ifdef DBG_ALEX
        printf("r = %d, c = %d (path[%d] = %c)\n", r, c, i, path[i]);
      #endif

        if (i > 0 && path[i] != path[i - 1]) {
            crtPathDelta++;
            pathDeltas[crtPathDelta] = 0;
        }
        pathDeltas[crtPathDelta]++;

        if (r == c) {

            int i2;
          #ifdef DBG_ALEX
            printf("pathDeltas = \n");
            for (i2 = 0; i2 <= crtPathDelta; i2++) {
                printf("%d ", pathDeltas[i2]);
            }
            printf("\n");

            printf("I have to do:\n");
            //printf("\n");
          #endif

            //for (i2 = 0; i2 <= crtPathDelta; i2++) {
            for (i2 = crtPathDelta; i2 >= 0; i2--) {
                crtMoveRes = opposite[crtMoveRes];
                int j;
                for (j = 0; j < pathDeltas[i2]; j++) {
                    //printf("%c", crtMoveRes);
                    pathRes[pathResLen++] = crtMoveRes;
                }
            }


            crtPathDelta = 0;
            pathDeltas[0] = 0;
            crtMoveRes = path[i + 1]; // We start in "opposite" dir than Lidia
        }
    }
    path[pathResLen] = 0;
}

void Read() {
    int i;
    int idTest;
    int res;

    //FILE *fin = fopen(fileName, "rt");
    //freopen("myfile.txt", "w", stdin);
    FILE *fin = stdin;

    assert(fin != NULL);
    res = fscanf(fin, "%d", &T);

  #ifdef DBG_ALEX
    printf("T = %d\n", T);
  #endif

    for (idTest = 0; idTest < T; idTest++) {
        res = fscanf(fin, "%d", &N);

      #ifdef DBG_ALEX
        printf("N = %d\n", N);
      #endif

        assert(N <= NMAX);
        res = fscanf(fin, "%s", path);

        pathLen = strlen(path);
        assert(pathLen == 2 * N - 2);

      #ifdef DBG_ALEX
        printf("path = %s\n", path);
        //printf("\n");
      #endif

        printf("Case #%d: ", idTest + 1);
        pathResLen = 0;
        Solve();
        printf("%s\n", pathRes);
    }

    fflush(stdout);
    fclose(fin);
}

int main(int argc, char **argv) {
    //assert(argc == 2);

    //Read(argv[1]);
    Read();
    return 0;
}

