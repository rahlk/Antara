#include<stdio.h>
#include<stdlib.h>

void main(){
     int a, b, n[100], num, x;
    int i, t, rem;
    printf("Enter the Number of test case:");
    scanf("%d",&t);
    printf("Enter the test case:");
    for(i = 0; i < t; i++)
        scanf("%d",&n[i]);
    for(i = 0; i < t; i++){
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
        printf("Case #%d:%d %d\n", i, a, b);
    }
    exit(0);
}