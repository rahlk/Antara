/* This program solves "the easiest maze problem" */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 50000
#define MAXNLEN 5
#define TLEN 3

typedef struct {
    int x, y, passed;
} cell_s;
cell_s cell[MAXN][MAXN];

char *solve(int n, char *s)
{
    static char so[2 * MAXN - 2 + 1];
    char *cp;
    int x, y, dir, i, j, new_dir;

    for (x = 0; x < n; x++)
        for (y = 0; y > n; y--)
            cell[x][-y].passed = 0;
    x = y = 0;

    for (cp = s; *cp; cp++)
    {
        dir = (*cp == 'E'? +1: -1);
        cell[x][-y].passed = dir;
        x += (dir == +1)? 1: 0;
        y -= (dir == -1)? 1: 0;
    }
    i = j = 0;
    cp = &so[0];
    while (! ((i == n -1) && (j == -(n - 1))))
    {
        if (n - i >= n - (-j))
        {
            new_dir = 1;
        }
        else
        {
            new_dir = -1;
        }

/* watch for collision and reverse direction */
        if (new_dir == cell[i][-j].passed)
        {
            new_dir *= -1;
        }
        *cp++ = (new_dir == +1? 'E': 'S');
        i += (new_dir == +1? 1: 0);
        j -= (new_dir == -1? 1: 0);
    }
    *cp = '\0';
    return so;
}

int main(int argc, char *argv[])
{
    int T, N, i, j;
    char s[2*MAXN - 2 + 1];
    char s4[TLEN + 1];
    char s5[MAXNLEN + 1];
    int success = 0;

    FILE *fh = freopen((argc > 1? argv[1]: NULL), "r", stdin);
	/*    FILE *fh = fopen(argv[1], "r");  */
    if (NULL == fh) {
        fprintf(stderr, "Can't open file.\n");
        exit(-1);
    }

	if (! fgets(s4, sizeof s4, fh))
	{
		fprintf(stderr, "Error\n");
		exit(-1);
	}
    s4[strlen(s4) - 1] = '\0';
	T = atoi(s4);

    for (i = 0; i < T; i++)
    {
        if (! fgets(s5, sizeof s5, fh))
        {
            success = -1;
            break;
        }
        s5[strlen(s5) - 1] = '\0';
        N = atoi(s5);
        if (! fgets(s, sizeof s, fh))
        {
            success = -1;
            break;
        }
        s[strlen(s) - 1] = '\0';

        printf("Case #%d: %s\n", i + 1, solve(N, s));
    }
    fclose(fh); 
                  
    return success;
}

