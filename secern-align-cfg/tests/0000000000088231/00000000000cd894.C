#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        char N[101], A[101], B[101];
        scanf("%s", N);
        int k = 0;
        for(int i = 0; ; i++) {
            if (N[i] == 0) {
                A[i] = B[k] = 0;
                break;
            }
            if (N[i] == '4') {
                A[i] = B[k++] = '2';
            } else {
                A[i] = N[i];
                if (k > 0) {
                    B[k++] = '0';
                }
            }
        }
        printf("Case #%d: %s %s\n", t, A, B);
    }
    return 0;
}