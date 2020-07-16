//#define DEBUG

//#include <iostream>
#include <stdio.h>
#include <string.h>

//using namespace std;

char *calcula(int r, int l, int *f);

int main()
{
    int t, n, b, f, l, i, j, k;
    
    char bit[10];
    int aux;
    char test[1025], resp[10][1025], solucion[100];
    
    scanf("%d", &t);
    
    int res;
        
    for (i=0; i< t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &b);
        scanf("%d", &f);
        
        if (n==0)
            return 0;
        
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
            
            fprintf(stderr, "%s", test);
            fscanf(stderr, "%s", resp[j]);
            
            //if (strlen(resp[j]) < n-b)
                //return 0;
        }
        
        //return 0;
    
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
        
        //char resp[100];
        
        //cin >>k;
        //fscanf(stderr, "%s", resp);
        
        //if (resp[0] == '-')
           // while(1);
    }

    return 0;    
}
