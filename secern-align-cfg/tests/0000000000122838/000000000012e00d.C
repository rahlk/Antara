#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    uint32_t c;
    uint32_t d;
} pair_t;

int main(void) {
    int tests;
    scanf("%d", &tests);
    for(int testnum = 1; testnum <= tests; testnum++) {
        int n;
        int k;
        scanf("%d %d", &n, &k);
        pair_t * pairs = malloc(sizeof(pairs[0])*n);
        for(int i = 0; i < n; i++) {
            int t;
            scanf("%d", &t);
            pairs[i].c = (uint32_t)t;
        }
        for(int i = 0; i < n; i++) {
            int t;
            scanf("%d", &t);
            pairs[i].d = (uint32_t)t;
        }
        uint64_t ans = 0;
        for(int l = 0; l < n; l++) {
            uint32_t running_c_max = 0;
            uint32_t running_d_max = 0;
            for(int r = l; r < n; r++) {
                if(pairs[r].c > running_c_max) running_c_max = pairs[r].c;
                if(pairs[r].d > running_d_max) running_d_max = pairs[r].d;
                if(running_c_max > running_d_max+k) continue;
                if(running_d_max > running_c_max+k) continue;
                ans++;
            }
        }
        printf("Case #%d: %lu\n", testnum, ans);
        free(pairs);
    }
    return EXIT_SUCCESS;
}
