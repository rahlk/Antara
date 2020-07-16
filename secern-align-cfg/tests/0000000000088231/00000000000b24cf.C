#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    int i;
    for(i=0; i<T; i++) {
        char N[256];
        scanf("%s", N);

        char N2[256];
        int j;
        for(j=0; N[j]!='\0'; j++) {
            if(N[j] != '4') {
                N2[j] = '0';
            }
            else {
                N2[j] = N[j] = '2';
            }
        }
        N2[j] = '\0';
        printf("Case #%d: %s %s\n", i+1, N, N2+strspn(N2, "0"));
    }

    return 0;
}
