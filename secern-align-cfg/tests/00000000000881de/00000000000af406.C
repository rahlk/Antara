#include <stdio.h>
int main ()
{
    int N,A,B,T;
    scanf("%d",&T);
    for (int i = 0; i < T; i++){

        scanf("%d",&N);

        A = N/2;
        N = A;
        B = N;
    }
    printf("Case #%d: %d %d",T,A,B);
    return 0;
}

