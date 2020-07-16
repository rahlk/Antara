#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

typedef unsigned char bool;

char str[120000], path[120000];

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);
    while(T--)
    {
        int i, n, size;
        int S = 0, E = 0, px = 0, py = 0, lx = 0, ly = 0;
        char last;
        
        scanf("%d\n%s\n", &n, str);
        
        size = 2*n - 2;
        last = str[size-1];
        
        for(i = 0; i < size; i++)
            if(str[i] == 'S')
                S++;
            else
                E++;
            
        for(i = 0; i < size; i++)
            if(S == 0)
                path[i] = 'E';
            else if(E == 0)
                path[i] = 'S';
            else
            {
                if(px == lx && ly == py)
                    path[i] = (str[i] == 'S') ? 'E' : 'S';
                else
                    path[i] = last;
                
                if(path[i] == 'S') px++, S--; else py++, E--;
                if(str[i] == 'S') lx++; else ly++;
            }
        path[size] = 0;
        
        printf("Case #%d: %s\n", ++cont, path);
    }
    
return 0;
}
