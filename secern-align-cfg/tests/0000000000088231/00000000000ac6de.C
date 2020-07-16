#include <stdio.h>
int main(void){
    int t, i;
    long long int N, temp, count, newnum;
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        count = 1; newnum  = 0;
        scanf("%lld", &N);
        temp = N;
        while (temp != 0){
            if ((temp % 10) == 4){
                N -= 2 * count;
                newnum += 2 * count; 
            }
            count *= 10;
            temp /= 10;
        }
        printf("Case #%d: %lld %lld\n", i + 1, N, newnum);
    } 
}