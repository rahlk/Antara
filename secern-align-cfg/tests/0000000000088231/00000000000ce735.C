#include <stdio.h>

int gotfour(int a);

int main(void) {
    int T, N;
    int i, j;
    
    scanf("%d", &T);
    for(i=0 ; i<T ; i++) {
        scanf("%d", &N);
        for(j=1 ; j<N ; j++) {
           if(gotfour(j) < 0 && gotfour(N-j) < 0) {
                printf("Case #%d: %d %d\n", i+1, j, N-j);
                break;
            }
        }
    }
    
    return 0;
}

int gotfour(int a) {
    int i, tmp;
    tmp = a;
    
    while(tmp > 0) {
        if(tmp%10 == 4) {
            return 1;
        }
        
        else {
            tmp = tmp / 10;
        }
    }
    
    return -1;
}