#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, T;
    int i = 0;
    scanf("%d", &T);
    for (i = 1; i <=T; i++) {
        scanf("%d", &n);
        int n1 = 0, n2 = 0;
        int top = -1;
        int array[10];
        memset(array, 0, sizeof(array));
        
        while(n) {
            array[++top] = n%10;
            n = n/10;
        }
        
        while(top >= 0) {
            if (array[top] == 4) {
                n1 = (n1*10)+2;
                n2 = (n2*10)+2;
            } else {
                n1 = (n1*10)+array[top];
                n2 = (n2*10);
            }
            top--;
        }
        
    printf("Case #%d: %d %d\n", i, n1, n2);
    }
    
    return 0;
    

}