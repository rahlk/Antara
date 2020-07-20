#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int t;
    int N;
    int arrA[100];
    int arrB[100];
    scanf("%d", &t);
    
    
    for (int i = 1; i <= t; i++) {
        printf("Case #%d: ", i);
        for(int q = 0; q < 101; q ++) {
            arrA[q] = 0;
            arrB[q] = 0;
        }
        scanf("%d", &N);

        for (j = 0; N != 0; j++) {
            if (N % 10 != 4) {
                arrA[j] = N % 10;
                arrB[j] = 0;
            }
            else {
                arrA[j] = 2;
                arrB[j] = 2;
            }
            
            N = N / 10;
        }
        
        int s = j - 1;
        for (s; s >=0; s--) {
            printf("%d", arrA[s]);
        }
        printf(" ");
        int check = 0;
        for (j = j -1; j >= 0; j++) {
            if (arrB[j] == 0 && check == 0)
            else
             printf("%d", arrB[j]);
        }
        printf("\n");
        
    }
}