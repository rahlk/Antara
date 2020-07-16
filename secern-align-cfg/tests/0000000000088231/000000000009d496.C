#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    
    int T, i, j, r;
    long int N, C1, C2=0;
    scanf("%d", &T);
    long int* result = (long int*)malloc(2*T*sizeof(long int));
    for(i=0; i<T; i++){
        scanf("%ld", &N);
        C1 = N;
        j=0;
        while(C1 > 0){
            r = C1%10;
            if(r == 4){
                C2 = C2 + pow(10,j);
            }
            C1 = C1/10;
            j++;
        }
        C1 = N - C2;
        *(result + 2*i) = C1;
        *(result + 2*i + 1) = C2;
    }
    for(i=0; i<T; i++){
        printf("Case #%d: %ld %ld\n", i+1, *(result + 2*i), *(result + 2*i + 1));
    }
    free(result);
    return 0;
}