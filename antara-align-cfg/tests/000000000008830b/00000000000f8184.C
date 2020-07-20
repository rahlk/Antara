#include <stdio.h>

int gcd (int a, int b);

int main (void) {
    int t, n, l, mark, i, j, k, tem;
    scanf ("%d", &t);
    for (k=1; k<=t; k++) {
        int copr[101] = { 0 };
        int prime[101] = { 0 };
        int set[101] = { 0 };
        int temp[101] = { 0 };
        scanf ("%d %d", &n, &l);
        for (i=0; i<l; i++) {
            scanf ("%d", &copr[i]);
        }
        i=0;
        while (copr[i] == copr[i+1]) {
            i++;
        }
        mark = i+1;
        prime[i+1] = gcd (copr[i], copr[i+1]);
        for ( ; i>=0; i--) {
            prime[i] = copr[i]/prime[i+1];
        }
        for ( ; mark<l; mark++) {
            prime[mark+1] = copr[mark]/prime[mark];
        }
        l++;
        for(i = 0; i < l; i++) {
            set[i] = prime[i];
        }
        for (i = 0; i < l-1; i++) {
            for (j = 0; j < l-i-1; j++) {
                if (set[j] > set[j+1]) {
                    tem = set[j]; 
                    set[j] = set[j+1]; 
                    set[j+1] = tem; 
                }
            }
        }
        for (i=0, j=0; i<l-1; i++) {
            if (set[i] != set[i+1]) { 
                temp[j++] = set[i]; 
            }
        }
        temp[j++] = set[l-1]; 
        for (int i=0; i<j; i++) {
            set[i] = temp[i];
        }
        printf("Case #%d: ", k);
        for (i=0; i<l; i++) {
            for (j=0; prime[i]!=set[j]; j++) {}
            printf ("%c", j+65);
        }
        printf("\n");
    }
    return 0;
}

int gcd (int a, int b) {
    while (a != b) {
        if (a > b) {
           a = a - b; 
        }
        else {
           b = b - a;
        }
    }
    return a;
}