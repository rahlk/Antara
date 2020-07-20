
#include <stdio.h>

int main()
{
    int t, i, j, n, h;
    char *p, *q;
    char linea[100], linea2[100];
    
    scanf("%d", &t);
    
    for (i=0; i< t; i++)
    {
        scanf("%s", linea);
        
        h=0;
        for (p=linea, q = linea2; *p; p++)
        {
            if (*p == '4')
            {
                h=1;
                *p = '3';
                *(q++) = '1';
                continue;
            }
            
            if (h)
            {
                *(q++) = '0';
            }
        }
        *q=0;
        
        printf("Case #%d: %s %s\n", i+1, linea, linea2);
    }
}