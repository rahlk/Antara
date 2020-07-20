#include <stdio.h>
#include <string.h>
#define R 1
#define P 2
#define S 3

int main(int argc, char const *argv[])
{
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        int a;
        int answers[265][500];
        scanf("%d", &a);
        for (int j = 0; j < a; ++j)
            for (int k = 0; k < 500; ++k)
                answers[j][k]=0;
        for (int j = 0; j < a; ++j)
        {
            char c[501];
            scanf ("%s",c);
            //printf("%s\n",c );
            answers[j][0]= strlen(c);
            for (int k = 1; k <= answers[j][0]; ++k)
            {
                if (c[k-1]=='R')
                {
                    answers[j][k]=R;
                }
                else if (c[k-1]=='P')
                {
                    answers[j][k]=P;
                }
                else
                {
                    answers[j][k]=S;
                }
            }
        }
        int imp = 0;
        int pronto = 0;
        int j = 0;
        int seq[500];
        while (!imp && j < 500 && !pronto)
        {
            int r = 0;
            int p = 0;
            int s = 0;
            for (int k = 0; k < a; ++k)
            {
                if (answers[k][(j%answers[k][0]) + 1] == R)
                {
                    r=1;
                }
                else if (answers[k][(j%answers[k][0]) + 1] == P)
                {
                    p=1;
                }
                else
                {
                    s=1;
                }
                if (r!=0 && s!=0 && p!=0)
                {
                    imp = 1;
                    break;
                }
            }
            if (r)
            {
                if (s)
                    seq[j] = R;
                else if (p)
                    seq[j] = P;
                else
                {
                    seq[j] = P;
                    pronto = j;
                }
            }
            else if (s)
            {
                if (p)
                    seq[j] = S;
                else
                {
                    seq[j] = R;
                    pronto = j;
                }

            }
            else
            {
                seq[j] = S;
                pronto = j;
            }
            j++;

        }

        printf("Case #%d: ",i+1 );
        if (imp)
        {
            printf("IMPOSSIBLE\n");
        }
        else
        {
            for (int k = 0; k < pronto; ++k)
            {
                printf("%c", seq[k]==R ? 'R' : (seq[k]==P ? 'P' : 'S' ));
            }
            printf("\n");
        }

    }
    return 0;
}

/*
01234567
7RRRSSS
7RRRPPP
6RRRRR

*/