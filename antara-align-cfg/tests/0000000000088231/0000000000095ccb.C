#include <stdio.h>
#include <math.h>

int not_four(int i) {
    int rem, flag=1;
    while(i != 0) {
        rem = i%10;
        if(rem == 4) { 
        flag = 0;
        break;
        }
    }
    if(flag == 0)
    return 0;
    else
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int i;
        for(i=1; i<n; i++) {
            if((not_four(i) == 1)  && (not_four(n-i) == 1)) {
                printf("%d %d\n", i, n-i);
                break;
            }
        }
    }
    return 0;
}