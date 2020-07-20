#include <stdio.h>

int main() {
    int T;
    char N[101];
    char B[101];
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        scanf("%s", N);
        int j = 0, k = 0;
        while (N[j] != '4' && N[j] != '\0') j++;
        for (; N[j] != '\0'; j++, k++) {
            if (N[j] == '4') {
                N[j] = '2';
                B[k] = '2';
            } else {
                B[k] = '0';
            }
        }
        B[k] = '\0';
        printf("Case #%d: %s %s\n", i, N, B);
    }
}
