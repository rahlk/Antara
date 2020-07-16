#include <stdio.h>

int main(){
    int entries, n, a, b = 0;
    int casenum = 1;
    scanf("%d", &entries);
    while(casenum <= entries){
        int mult = 1;
        scanf("%d", &n);
        while(n > 0){
            int x = n % 10;
            if(x == 4){
                a += 3 * mult;
                b += 1 * mult;
            }else{
                a += x * mult;
            }
            n /= 10;
            mult *= 10;
        }
        printf("Case #%d: %d %d\n", casenum, a, b);
        a = 0;
        b = 0;
        casenum += 1;
    }
}