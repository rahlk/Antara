#include <stdio.h>

main(){
    int n;
    int c=0;
    int m;
    int r;
    int k, a, b;
    scanf("%d", &n);
    while (n!=c){
        scanf("%d", &k);
        m = 1;
        a = 0;
        b = 0;
        while(k!=0){
            r = k%10;
            if (r == 4){
                a += 3*m;
                b += 1*m;
            }
            else{
                a += r*m;
            }
            k -= r;
            k /= 10;
            m *= 10;
        }
        c+=1;
        printf("Case #%d: %d %d\n", c, a, b );
    }
}
