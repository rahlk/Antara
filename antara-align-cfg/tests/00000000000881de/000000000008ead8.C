#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T, N, B, F;
    char c = 0;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        scanf("%d %d %d", &N, &B, &F);
        char guess_store[N + 1];
        int broken[B];
        int guessed = 0;
        guess_store[N] = '\0';
        while (guessed < B) {
            int i;
            if (guessed) i = broken[guessed - 1] + 1;
            else i = 0;
            if (i >= N) return -1;
            while (i < N) {
                if (i % (B - guessed) == 0) c = !c;
                guess_store[i] = c;
                i++;
            }
            printf("%s\n", guess_store);
            broken[guessed] = guessed;
            guessed++;
        }
    }
    return 0;
}