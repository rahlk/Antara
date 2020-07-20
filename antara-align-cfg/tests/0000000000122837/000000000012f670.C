#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int T,W;
    long long int d1, d2, d7, d4, d5, d6;
    long long int ans1, ans2, ans3, ans4, ans5, ans6;
    scanf("%d %d", &T, &W);
    
    printf("1\n");
    fflush(stdout);
    scanf("%d", &lld1);
    
    printf("2\n");
    fflush(stdout);
    scanf("%d", &lld2);
    
    printf("7\n");
    fflush(stdout);
    scanf("%d", &lld7);
    
    printf("4\n");
    fflush(stdout);
    scanf("%d", &lld4);
    
    printf("5\n");
    fflush(stdout);
    scanf("%d", &lld5);
    
    printf("6\n");
    fflush(stdout);
    scanf("%d", &lld6);
 
    ans1 = (d7-d6)/64;
    ans4 = d4 - (d6)/2 + 16 * ans1;
    ans5 = (2*d5 - d7 + 64* ans1 - 2*ans4)/2;
    ans6 = d2*2 - d5 + 24*ans1;
    ans2 = d2 -d1 -2*ans1;
    ans3 = (d6 - d5 - 32* ans1 - 4 *ans2 - ans6)/2;
    printf("%lld %lld %lld %lld %lld %lld\n", ans1, ans2, ans3, ans4, ans5, ans6);
}