#include<stdio.h>
int  IsValidNumber(int a) {
    while(a > 0) {
        if(a%10 == 4) {
            return 0;
        }
        a = a/10;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
   
    for(int i =1; i <= T; i++)  {
        int N;
        scanf("%d", &N);
        for(int j=0; j< N; j++) {
            if(IsValidNumber(j) && IsValidNumber(N-j)) {
                printf("Case #%d: %d %d\n",i, j, N-j);
                break;
            }
        }
    }
    
    return 0;
}
