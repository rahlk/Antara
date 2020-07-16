
#include <stdio.h>
#include <string.h>

#define uc unsigned char
int x[500], y[500];
char d[500];

int Resuelve(int f);
void carga();
void genera();

char p[120][6];

int main()
{
    int i, j, t, f, p, q, n;
    char saux[10];
    
    genera();    
    
    scanf("%d", &t);
    
    for (i=0; i< t; i++)
    {
        scanf("%d", &f);        
        Resuelve(f);
        
    }

}

int Resuelve(int f)
{
    int i, i1, j, n;
    char linea[2];
    char test[150];
    
    char p0[120];
    
    memset(p0, 1, 120);
    
    i1=0;
    for (i=0; i< 119; i++)
    {        
        printf("%d\n", 5 * i + i1);
        fflush(stdout);        
        
        fscanf(stdin, "%s", linea);
        test[i] = linea[0];
        
        i1 = (i1+1)%5;
    }
    
    i1=1;
    for (i=0; i< 31; i++)
    {
        printf("%d\n", 5 * i + 11);
        fflush(stdout);
        
        fscanf(stdin, "%s", linea);
        test[119+i] = linea[0];
        
        i1 = (i1+1)%5;
    }
    
    int bueno;
    
    for (i=0; i<120; i++)
    {
        bueno = 0;
        for (j=0; !bueno && j< 119; j++)
        {
            if (p[i][5*j]!=test[j])
                bueno = 1;
        }        
        
        for (j=0; !bueno && j< 31; j++)
        {
            if (p[i][5*j+1]!=test[119+j])
                bueno = 1;      
        }
        
        if (!bueno)
            break;
        
    }
    
    printf("%s\n", p[i]);
    fflush(stdout);    

    return 0;
}

void genera()
{
    int i0, i1, i2, i3, i4, n;
    char linea[6];
    
    memset(&p[0][0], 0, 120 *6);
    n=0;
    
    for (i0=0; i0<5; i0++)
    {        
        for (i1=0; i1<5; i1++)
        {
            if (i1==i0)
                continue;            
            
            for (i2=0; i2<5; i2++)
            {                
                if (i2==i0)
                    continue;
                if (i2==i1)
                    continue;            
                
                for (i3=0; i3<5; i3++)
                {
                    if (i3==i0)
                        continue;
                    if (i3==i1)
                        continue;
                    if (i3==i2)
                        continue;                    
                    
                    for (i4=0; i4<5; i4++)
                    {
                        if (i4==i0)
                            continue;
                        if (i4==i1)
                            continue;
                        if (i4==i2)
                            continue;
                        if (i4==i3)
                            continue;                        
                        
                        p[n][0] = 'A' + i0;
                        p[n][1] = 'A' + i1;
                        p[n][2] = 'A' + i2;
                        p[n][3] = 'A' + i3;
                        p[n][4] = 'A' + i4;
                        n++;                        
                    }
                }
            }
        }
    }    
}
