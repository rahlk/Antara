#include <stdio.h>

int main() {
        int nTests = 0;
        scanf("%d\n", &nTests);

        for(int i=1; i<=nTests; i++) {
                int n = 0;
                scanf("%d\n", &n);

                int a = n, b = 0;
                int div = 1;
                for(int j=0; j < 11; j++) {
                        int d = (n/div)%10;
                        if(d == 4) {
                                a -= div;
                                b += div;
                        }
                        div *= 10;
                }
                if(a+b != n)
                        fprintf(stderr, "ABORT\n");
                printf("Case #%d: %d %d\n", i, a, b);
        }
}