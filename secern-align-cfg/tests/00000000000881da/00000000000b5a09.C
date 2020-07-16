#include <stdio.h>

int main(void) {
    unsigned long  t, i, n;
    char           m[20001];
    char          *p;
    
    scanf("%lu", &t);
    
    for (i = 1; i <= t; ++i) {
        scanf("%lu", &n);
        scanf("%s", m);
        
        for (p = m; *p; ++p) {
            if ('S' == *p) *p = 'E';
            else           *p = 'S';
        }
        
        printf("Case #%lu: %s\n", i, m);
    }
    
    return 0;
}