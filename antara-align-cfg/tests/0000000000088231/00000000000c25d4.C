#include <stdio.h>

int main()
{
    long long int N,A,B;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lld",&N);
        A=N/2;
        B=A+N%2;
        printf("Case #%d: %lld %lld\n",i,A,B);
    }
    return 0;
}
