#include<stdio.h>
main() {
    int T;
    scanf("%d", &T);
   
    for(int i =1; i <= T; i++)  {
        double N,
        scanf("%lf", N)
        for(long j=0; j< N; j++) {
            if(IsValidNumber(j) && IsValidNumber(N-j)) {
                printf("Case #%d: %lf %lf",i, j, N-j);
                break;
            }
        }
    }
}

bool IsValidNumber(long a) {
    while(a > 0) {
        if(a%10 == 4) {
            return false;
        }
        a = a/10;
    }
    return true;
}