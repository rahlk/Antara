#include <stdio.h>

bool containsFour(long long x) {
    while (x) {
        if (x % 10 == 4) {
            return true;
        }

        x /= 10;
    }

    return false;
}

int main() {
    int T, i;
    scanf("%d", &T);

    for (i = 0; i < T; ++i) {
        long long N;
        scanf("%Ld", &N);

        long long temp = N;
        long long div = 2;

        while (div <= N / 2) {
            temp = temp / div;
            bool found = false;

            while (temp) {
                if (!containsFour(temp) && !containsFour(N - temp)) {
                    found = true;
                    break;
                }

                temp = temp / div;
            }

            if (found) {
                printf("Case #%d: %Ld %Ld\n", i + 1, temp, N - temp);
                break;
            }
            div++;
        }
    }
    return 0;
}