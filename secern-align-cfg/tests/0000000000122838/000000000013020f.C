#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100000

int main (void)
{
    int testcases = 0;
    int k = 0;
    int swords = 0;
    int max_s_gap = 0;
    int ioutput = 0;
    int c_skills [MAX] = {0};
    int d_skills[MAX] = {0};
    int c, c_best = 0, d_best = 0, c_best_i = 0, d_best_i = 0;

    c = fscanf(stdin, "%d\n", &testcases);

    for (k = 0; k < testcases; k++)
    {
        ioutput = 0;
        c_best = 0;
        d_best = 0;
        c = fscanf(stdin, "%d %d\n", &swords, &max_s_gap);

        for (int j = 0;j < swords; j++)
        {
            c = fscanf(stdin, "%d", &c_skills[j]);
        }
        for (int j = 0;j < swords; j++)
        {
            c = fscanf(stdin, "%d", &d_skills[j]);
        }

        for (int j = 0; j < swords; j++)
        {
            if (c_skills[j] > c_best)
            {
                c_best = c_skills[j];
                c_best_i = j;
            }
        }
        for (int j = 0; j < swords; j++)
        {
            if (d_skills[j] > d_best)
            {
                d_best = d_skills[j];
                d_best_i = j;
            }
        }
        if (d_best_i >= c_best_i)
        {
            for (int j = c_best_i; j < d_best_i; j++)
            {
                for (int m = c_best_i; m < j; m++)
                {
                    if (abs(d_skills[m] - c_skills[j]) <= max_s_gap)
                    {
                        ioutput++;
                    }
                }
            }
        }else
        {
            for (int j = d_best_i; j < c_best_i; j++)
            {
                for (int m = d_best_i; m < j; m++)
                {
                    if (abs(c_skills[m] - d_skills[j]) <= max_s_gap)
                    {
                        ioutput++;
                    }
                }
            }
        }

        fprintf(stdout, "Case #%d: %d\n", k+1, ioutput);
        fflush(stdout);
    }
    if (c){}
    return 0;
}
