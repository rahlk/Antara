#include <stdio.h>

int main(void) {
    unsigned long t, i;
    char a[101], b[101];
    char *p, *q;
    
    scanf("%lu", &t);
    
    for (i = 1; i <= t; ++i) {
        scanf("%s", a);
        
        for (p = a, q = b; *p; ++p) {
            if ('4' == *p) {
                *p = '3';
                *q++ = '1';
            } else if (b != q)
                *q++ = '0';
        }
        
        *q = 0;
        
        printf("Case #%lu: %s %s\n", i, a, b);
    }
    
    return 0;
}