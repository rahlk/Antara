
#include <stdio.h>

int main()
{
    int i, t, n;
    char camino[100000], *p;
    
    scanf("%d", &t);
    
    for (i=0; i< t; i++)
    {
        scanf("%d", &n);
        scanf("%s", camino);
        
        for(p=camino; *p; p++)
            *p=*p == 'S'?'E':'S';
            
        printf("Case #%d: %s\n", i+1, camino);
    }
}
