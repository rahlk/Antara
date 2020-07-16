#include<stdio.h>

#define MAX 105

void replace4(char *num, int cases) {
    char num1[MAX], num2[MAX];
    int size, i;
    int index2;
    int num_begin = 0;

    size = strlen(num);
    index2 = 0;

    for ( i=0; i < size; i++ ) {
        if ( num[i] == '4' ) {
            num1[i] = '2';
            num2[index2] = '2';
            num_begin = 1;
            index2++;
        } else {
            if ( num_begin == 1) {
                num2[index2] = '0';
                index2++;
            }
            num1[i] = num[i];
        }
    }


    num1[size] = '\0';
    num2[index2] = '\0';

    printf("Case #%d: %s %s\n", cases, num1, num2);
}

int main() {
    int n, i;
    char num[MAX], num1[MAX], num2[MAX];
    int size;

    scanf("%d", &n);
    for (i=0; i < n; i++) {
        scanf("%s", num);

        replace4(num, i+1);
    }

    return 0;
}
