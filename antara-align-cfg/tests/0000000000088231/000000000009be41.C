#include <stdio.h>

int main() {
    int MAX = 102;
    char buffer[MAX];
    char a[MAX];
    char b[MAX];
    int n = getchar();
    int offset = 0;
    getchar();
    for (int i = 0; i < n; i++) {
        fgets(buf, 100, stdin);
        for (int j = 0; j < MAX; j++) {
            if (buffer[j] == '\0') {
                a[j] == '\0';
                b[j] == '\0';
                break;
            } else if (buffer[j] == '4') {
                a[j] == '2';
                b[j] == '2';
            } else {
                a[j] == buffer[j];
                b[j] == '0';
            }
        }
        for (int k = 0; k < MAX; k++) {
            if (b[k] == '0') {
                offset++;
            } else {
                break;
            }
        }
        printf("Case #%i: %s %s", i, a, b + offset);
    }
}