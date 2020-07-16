#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void) {
	int T;
    scanf("%d",&T);
    while (T--) {
        for (int k =0; k < 100; k++) {
            int d;
            scanf("%d",&d);
            if (d == 100)
                printf("20 100\n");
            else
                printf("%d %d",1+(k%19), k);
            
        }

    }
	return 0;
}
