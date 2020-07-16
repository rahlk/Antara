#include<stdio.h>
#include<stdlib.h>

void main(){
    long int a, b, n[100], num, x;
    int i, t, rem;
    scanf("%d",&t);
    for(i = 0; i < t; i++)
       {
           scanf("%ld",&n[i]);
        num = n[i];
        x = 1;
        a = 0;
        b = 0;
        while(num){
            rem = num % 10;
            num /= 10;
            if(rem == 4){
                a += 2 * x;
                b += 2 * x;
            }
            else
                a += rem * x;
            x *= 10;
        }
        printf("Case #%d: %ld %ld\n", i + 1, a, b);
    }
    exit(0);
}