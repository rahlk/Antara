#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

#define ABS(x) (((x) >= 0) ? (x) : -(x))

typedef unsigned char bool;

int c[100100], d[100100];

bool fair(int ini, int end, int diff)
{
    int i;
    int maxc = 0, maxd = 0;
    
    for(i = ini; i <= end; i++)
        maxc = (maxc > c[i]) ? maxc : c[i];
    for(i = ini; i <= end; i++)
        maxd = (maxd > d[i]) ? maxd : d[i];
            
    return (ABS(maxc-maxd) <= diff);
}

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);

    while(T--)
    {
        int n, diff, sum = 0;
        int i, k;
        
        scanf("%d %d\n", &n, &diff);
        
        for(i = 0; i < n; i++)
            scanf("%d ", &c[i]);
        for(i = 0; i < n; i++)
            scanf("%d ", &d[i]);
        
        for(i = 0; i < n; i++)
            for(k = i; k < n; k++)
                if(fair(i, k, diff))
                {
                    sum++;
                    /*printf("%d %d\n", i+1, k+1);*/
                }
                        
        printf("Case #%d: %d\n", ++cont, sum);
    }
    
    return 0;
}
