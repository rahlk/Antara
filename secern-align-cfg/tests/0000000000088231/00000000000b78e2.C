#include <stdio.h>
int checker(int n) {
    while(n != 0) {
        int d = n%10;
        if(d == 4)
        return 0;
        n=n/10;
    }
    return 1;
}

int main() {
    //input
    int i,t,num;
    scanf("%d", &t); //Test Case
    //output
    int m,n;
    for(i=1; i<=t; i++) {
        scanf("%d", &num);
        m=num-1;
        n=1;
        int t1 = checker(m);
        int t2 = checker(n);
        while (t1 == 0 || t2 == 0) {
            m--;
            n++;
            t1 = checker(m);
            t2 = checker(n);
        }
        printf("Case #%d: %d %d\n", i, m, n);
    }
}