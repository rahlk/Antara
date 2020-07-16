#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        int p,q;
        int manhattan[11][11];
        for (int m = 0; m <= 10; ++m)
        {
            for (int n = 0; n <= 10; ++n)
            {
                manhattan[m][n]=0;
            }
        }

        scanf ("%d", &p);
        scanf ("%d", &q);
        for (int j = 0; j < p; ++j)
        {
            int x,y;
            scanf ("%d", &x);
            scanf ("%d", &y);
            char c;
            scanf (" %c", &c);
            if (c == 'N')
            {
                for (int m = y+1; m <= 10; ++m)
                {
                    for (int n = 0; n <=10; ++n)
                    {
                        manhattan[m][n]++;
                    }
                }
            }
            else if (c == 'S')
            {
                for (int m = y-1; m >= 0; --m)
                {
                    for (int n = 0; n <=10; ++n)
                    {
                        manhattan[m][n]++;
                    }
                }
            }
            else if (c == 'E')
            {
                for (int m = 0; m <= 10; ++m)
                {
                    for (int n = x+1; n <=10; ++n)
                    {
                        manhattan[m][n]++;
                    }
                }
            }
            else
            {
                for (int m = 0; m <= 10; ++m)
                {
                    for (int n = x-1; n >=0; --n)
                    {
                        manhattan[m][n]++;
                    }
                }
            }


        }
        int x=q, y=q;
        for (int m = q; m >= 0; --m)
        {
            for (int n = q; n >= 0; --n)
            {
                if (manhattan[m][n] >= manhattan[x][y])
                {
                    x=m;
                    y=n;
                }
            }
        }

        printf("Case #%d: %d %d\n",i+1,y,x );

    }
    return 0;
}