//#define DEBUG

#include <stdio.h>
#include <string.h>

char *calcula(int r, int l, int *f);

int main()
{
#ifdef DEBUG
    FILE *file;
#endif
    
    int t, n, b, f, l, i, j, k;
    
    char bit[10];
    int aux;
    char test[1025], resp[10][1025], solucion[100];
    
#ifdef DEBUG
    file = fopen("input.txt", "r");
    fscanf(file, "%d", &t);
#else
    scanf("%d", &t);
#endif
        
    for (i=0; i< t; i++)
    {
#ifdef DEBUG
        fscanf(file, "%d", &n);
        fscanf(file, "%d", &b);
        fscanf(file, "%d", &f);
#else
        scanf("%d", &n);
        scanf("%d", &b);
        scanf("%d", &f);
#endif
        
        aux = 1;
        for (j=0; j< f; j++, aux <<= 1)
        {
            bit[0] = 1;
            for (k=0; k< n; k++)
            {
                if (k%aux == 0)
                    bit[0] ^= 1;
                test[k] = '0' + bit[0];
            }
            
            test[n] = 0;
            
            fprintf(stderr, "TEST_STORE %s\n", test);
            
#ifndef DEBUG
            fscanf(stderr, "%s", &resp[j][0]);
#endif
        }
    
        
#ifdef DEBUG
        strcpy(&resp[0][0], "01101");
        strcpy(&resp[1][0], "00111");
        strcpy(&resp[2][0], "00011");
#endif
        
        int k1;
        
        int error;
        solucion[0] = 0;
        
        memset(bit, 1, 10);
        for (k = 0, k1 = 0; k < n; k++)
        {
            aux = 1;
            error = 0;
            for (j = 0; j < f; j++, aux <<= 1)
            {
                if (k % aux == 0)
                    bit[j] ^= 1;
                
                if ('0' + bit[j] != resp[j][k1])
                    error = 1;
            }
            
            if (error)
            {
                if (solucion[0])
                    sprintf(solucion, "%s %d", solucion, k);
                else
                    sprintf(solucion, "%d", k);
            }
            else
                k1++;
        }
        
        
        fprintf(stderr, "%s\n", solucion);
#ifndef DEBUG
        fscanf(stderr, "%d", &k);
#endif

        return 0;
    }
    
#ifdef DEBUG
    fclose(file);
#endif        
}
