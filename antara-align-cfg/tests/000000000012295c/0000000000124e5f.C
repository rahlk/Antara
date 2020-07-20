
#include <stdio.h>
#include <string.h>

#define uc unsigned char
int x[500], y[500];
char d[500];

void Resuelve(int caso, int p, int q, int *x, int *y, char *d);

int main()
{
    int i, j, t, p, q, n;
    char saux[10];
    
#ifdef DEBUG
    FILE *file;
    file = fopen("debug.txt", "r");
    fscanf(file, "%d", &t);
#else
    scanf("%d", &t);
#endif
    
    for (i=0; i< t; i++)
    {
#ifdef DEBUG
        fscanf(file, "%d", &p);
        fscanf(file, "%d", &q);
#else
        scanf("%d", &p);
        scanf("%d", &q);
#endif
        
        for (j=0; j< p; j++)
        {
#ifdef DEBUG
            fscanf(file, "%d", x+j);
            fscanf(file, "%d", y+j);
            fscanf(file, "%s", saux);
            d[j] = saux[0];
            //fscanf(file, "%c", &d[j]);
#else
            scanf("%d", x+j);
            scanf("%d", y+j);
            scanf("%s", saux);
            d[j] = saux[0];
#endif
        }
        Resuelve(i, p, q, x, y, d);
        
    }

}

void Resuelve(int caso, int p, int q, int *x, int *y, char *d)
{
    uc n[500][500];
    int i, j, k;
    
    memset(&n[0][0], 0, 250000);
    
    for (i=0; i<p; i++)
    {
        if (d[i] == 'N')
        {
            for (j=0; j<=q; j++)
            {
                for (k=y[i] + 1; k<= q; k++)
                    n[j][k]++;
            }
        }
        else if (d[i] == 'S')
        {
            for (j=0; j<=q; j++)
            {
                for (k=0; k < y[i]; k++)
                    n[j][k]++;
            }
        }
        else if (d[i] == 'E')
        {
            for (j=x[i]+1; j<=q; j++)
            {
                for (k=0; k<=q; k++)
                    n[j][k]++;
            }
        }
        else if (d[i] == 'W')
        {
            for (j=0; j< x[i]; j++)
            {
                for (k=0; k<=q; k++)
                    n[j][k]++;
            }
        }
    }
    
    int max = 0, xmax, ymax;

    for (j = 0; j <= q; j++)
    {
        for (i = 0; i <= q; i++)
        {
            if (n[i][j] > max)
            {
                max = n[i][j];
                xmax=i;
                ymax=j;
            }
        }
    }
    
    printf("Case #%d: %d %d\n", caso + 1, xmax, ymax);
}
