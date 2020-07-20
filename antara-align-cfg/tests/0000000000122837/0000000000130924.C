#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int64_t res1, res2;
    int64_t temp1, temp2;
    int T, W;
    int i;
    int64_t a, b, c, d, e, f;

    scanf( "%d, %d", &T, &W );

    for( i = 0; i < T; ++i ){
        printf("%d\n", 54);
        printf("%d\n", 240);
        fflush(stdout);
        scanf("%ld", &res1);
        scanf("%ld", &res2);
        /* Error Case */
        if( res1 > (int64_t)(0x800000000000000LL) )
            exit(-1);

        a = (res1 >> (int64_t)54) & 0xFF;
        b = (res1 >> (int64_t)27) & 0xFF;
        e = (res2 >> (int64_t)40) & 0xFF;
        f = (res2 >> (int64_t)48) & 0xFF;

        for( c = 0; c < 101; ++c ){
            for( d = 0; d < 101; ++d ){
                temp1 = (a << (int64_t)54) + (b << (int64_t)27) + (c << (int64_t)18) + (d << (int64_t)13) + (e << (int64_t)10) + (f << (int64_t) 9);
                temp2 =                                                                (d << (int64_t)60) + (e << (int64_t)48) + (f << (int64_t)40);
                temp1 = temp1 & 0x7FFFFFFFFFFFFFFF;
                temp2 = temp2 & 0x7FFFFFFFFFFFFFFF;
                if (temp1 == res1 && temp2 == res2)
                    break;
            }
            if( d < 101)
                break;
        }

        printf("%d %d %d %d %d %d\n", (int)a, (int)b, (int)c, (int)d, (int)e, (int)f);
        fflush(stdout);
    }

    return 0;
}

