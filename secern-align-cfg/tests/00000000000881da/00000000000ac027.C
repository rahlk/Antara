#include <stdio.h>

int main(void) {
    unsigned long t, i, j, n, l, lr, lc, r, c;
    int           m, o;
    
    scanf("%lu", &t);
    
    for (i = 1; i <= t; ++i) {
        scanf("%lu", &n);
        
        printf("Case #%lu: ", i);
        
        for (j = lr = lc = r = c = 0, l = (n << 1) - 2; j < l; ++j) {
            do { m = getchar(); }
            while ('S' != m && 'E' != m);
            
            if (lr == r && lc == c) {
                if ('S' == m) {
                    ++lr;
                    ++c;
                    
                    putchar('E');
                } else {
                    ++lc;
                    ++r;
                    
                    putchar('S');
                }
            } else {
                if ('S' == m) ++lr;
                else          ++lc;
                
                if (r < c) {
                    ++r;
                    putchar('S');
                } else {
                    ++c;
                    putchar('E');
                }
            }
        }
        
        putchar('\n');
    }
    
    return 0;
}