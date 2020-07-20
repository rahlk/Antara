#include <stdio.h>

void divide(int, &int, &int);
int contains_four(int a, int b);

int main() {
    int numCases;
    int a;
    int b;
    int value;
    
    scanf("%d" &numCases);
    
    for (size_t i = 0; i < numCases; i++) {
        scanf("%d" &value);
        divide(value, &a, &b);
        
        while(contains_four(a, b)) {
            a++;
            b--;
        }
        
        printf("Case #%d: %d %d", i + 1, a , b);
    }
}

int contains_four(int a, int b) {
    int check;
    while (a != 0) {
        check = a % 10;
        a = a / 10;
        
        if (check == 4)
            return 1;
    }
    while (b != 0) {
        check = b % 10;
        b = b / 10;
        
        if (check == 4)
            return 1;
    }
    return 0;
}

void divide(int value, int &a, int &b) {
    if (value % 2 == 0) {
        *a = value / 2;
        *b = value / 2;
    }
    else {
        *a = value / 2;
        *b = value = 2 + 1;
    }
}