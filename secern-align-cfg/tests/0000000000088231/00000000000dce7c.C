#include <stdio.h>

int main(){
    int t, x, dgt, isbhasfour, flaga, flagb;
    long long a, b, n, i;

    scanf("%d", &t);

    for(x=1; x<=t; x++){
        scanf("%lld", &n);


        for(i=1; i<=n/2; i++){
            a=i;
            b=n-i;
            flaga=0, flagb=0;

            for(;a!=0;){
                dgt = a%10;
                a=a/10;
                if(dgt == 4){
                    flaga = 1;
                    break;
                }
            }

            for(;b!=0;){
                dgt = b%10;
                b=b/10;
                if(dgt == 4){
                    flagb=1;
                    break;
                }
            }

            if(flaga==0 && flagb==0){
                printf("Case #%d: %lld %lld\n", x, i, n-i);
                i=n;
            }
        }

    }
    return 0;
}
