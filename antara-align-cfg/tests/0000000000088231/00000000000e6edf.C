#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void divide(int, int*, int*);
int contains_four(int a, int b);

int main() {
    int numCases, value;
    int aValue, bValue;
    char a[200];
    char b[200];
    
    scanf("%d", &numCases);
    
    for (size_t i = 0; i < numCases; i++) {
        scanf("%d", &value);
        

        sprintf(a, "%d", value);

        for (size_t j = 0; j < strlen(a); j++) {
          if (a[j] == '4') {
            b[j] = '1';
            a[j] = '3';
          }
          else
            b[j] = '0';
        }

        b[strlen(a)] = '\0';

        aValue = atoi(a);
        bValue = atoi(b);

        printf("Case #%d: %d %d\n", i + 1, aValue, bValue);
        a[0] = b[0] = '\0';
    }
    return 0;
}