//#define DEBUG

#include <stdio.h>
#include <string.h>

char *calcula(int r, int l, int *f);

int main()
{
    int t, n, b, f, l, i, j, k;
    
    char bit[10];
    int aux;
    char test[1025], resp[10][1025], solucion[100];
    
    fscanf(stdin, "%d", &t);
    
    int res;
        
    for (i=0; i< t; i++)
    {
        return 0;
    
        fscanf(stdin, "%d", &n);
        fscanf(stdin, "%d", &b);
        fscanf(stdin, "%d", &f);
        
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
            
            fprintf(stdout, "%s\n", test);
            fscanf(stdin, "%s", resp[j]);
        }
    
        return 0;
    
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
        
        
        fprintf(stdout, "%s\n", solucion);
        fscanf(stdin, "%d", k);
    }

    return 0;    
}
