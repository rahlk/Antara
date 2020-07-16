#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int day;
        for (int i = 0; i < 5; i++) {
            for (int j = 1; j <= 16; j++) {
                scanf("%d", &day);
                if (day == -1) return 0;
                printf("%d %d", j, 16 * i + j);
                fflush(stdout);
            }
        }
        for (int i = 1; i <= 20; i++) {
            scanf("%d", &day);
            if (day == -1) return 0;
            printf("%d 100", i);
            fflush(stdout);
        }
    }
}