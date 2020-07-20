#include<stdio.h>

void main(){
    long int a, b, n, x;
    int i, t, rem;
    printf("Enter the Number of test case:");
    scanf("%d",&t);
    printf("Enter the test case:");
    for(i = 0; i < t; i++)
        scanf("%d",&n);
        x = 1;
        a = 0;
        b = 0;
        while(n){
            rem = n % 10;
            n /= 10;
            if(rem == 4){
                a += 2 * x;
                b += 2 * x;
            }
            else
                a += rem * x;
            x *= 10;
        }
        printf("Case #%d:%d %d", i, a, b);
}