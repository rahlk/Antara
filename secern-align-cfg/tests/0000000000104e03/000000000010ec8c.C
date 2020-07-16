
#include <stdio.h>
#include <string.h>

int Resuelve(int icaso, int r, int c);
int next(int r, int c, int n, int p);

int x[400], y[400];
char aux[400];
int main()
{
    int i, j, t,  n;
    int c,r;
    
    
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
        fscanf(file, "%d", &c);
        fscanf(file, "%d", &r);
#else
        scanf("%d", &c);
        scanf("%d", &r);
#endif
        
        if (Resuelve(i, c, r))
        {
            printf("Case #%d: POSSIBLE\n", i+1);
            
            for (j=0; j< c*r; j++)
                printf("%d %d\n", y[j]+1, x[j]+1);
        }
        else
            printf("Case #%d: IMPOSSIBLE\n", i+1);
    }
}

int Resuelve(int icaso, int r, int c)
{
    int n = 0;
    int para;
    
    int i, j, p;
    
    memset(aux, 0, 400);
    
    int x0, y0;
    
    n=0;
    p=-1;
    
    int buena;
    
    while(1)
    {
        buena = 0;
        while (1)
        {
            p++;                
            if (p == c * r)
                break;

            x0 = p % c;
            y0 = p / c;

            if (aux[p])                
                break;

            if (n && x0 == x[n - 1])
                break;

            if (n && y0 == y[n - 1])
                break;

            if (n && y0 - x0 == y[n - 1] - x[n - 1])
                break;

            if (n && y0 + x0 == y[n - 1] + x[n - 1])
                break;

            buena = 1;
            break;
        }        
        
        if (buena)
        {
            x[n] = x0;
            y[n] = y0;
            aux[p] = 1;

            if (n == r * c - 1)
                return 1;

            n++;
            p = -1;
        }
        else
        {
            if (p == r*c)
            {                
                n--;
                if (n==-1)
                    return 0;
                
                aux[y[n]*c+x[n]] = 0;  
                p=y[n]*c+x[n];
            }
        }
    }    
        
    return 1;
}

int next(int r, int c, int n, int p)
{
    int ret;
    int x0, y0;
    
    while(1)
    {
        p++;
        
        x0 = p % c;
        y0 = p / c;
        
        if (aux[p])
            continue;
        
        if (p == c*r)
            return 0;
        
        if (x0 == x[n-1])
            continue;
        
        if (y0 == y[n-1])
            continue;
        
        if (y0 - x0 == y[n-1] - x[n-1])
            continue;
        
        if (y0 + x0 == y[n-1] + x[n-1])
            continue;
        
        break;
    }
    
    x[n] = x0;
    y[n] = y0;
    aux[p] = 1;
    n++;
    p=0;    
    
    ret = next(r, c, n, p);
    if (ret)
    {
        
        return 1;
    }
    
    n--;
    memset(aux + n, 0, r * c - n);
    if (p == r * c)
        return 0;

    p = y[n-1] * c + x[n-1];
    return next(r, c, n, p);
}


