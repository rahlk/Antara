#include <stdio.h>

int main() {
    int T;
    unsigned char N[100];
    unsigned char N2[100];
    
    scanf("%d", &T);
    getchar();

    for (int i = 0; i < T; i++) {
        int j = 0;
        while((N[j] = getchar()) != '\n') {
            if (N[j] == '4') {
                N[j] = '3';
                N2[j] = '1';
            }
            else {
                N2[j] = '0';
            }
            
            j++;
        }
        
        printf("Case #%d: ", i+1);
        for (int k = 0; k < j; k++) {
            printf("%c", N[k]);
        }
        printf(" ");
        int first = 0;
        for (int k = 0; k < j; k++) {
            if (N2[k] != '0') first = 1;
            if (first) printf("%c", N2[k]);
        }
        printf("\n");
    }
}
