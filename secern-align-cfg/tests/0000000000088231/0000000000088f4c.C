#include<stdio.h>
int main()
{
    int T,i,j,ans1,ans2;
    char N[110],M[110];
    scanf("%d",&T);
    for(i = 0; i < T; i++) {
        scanf("%s",N);
        ans1 = 0; ans2 = 0; j = 0;
        while(N[j] != '\0') {
            if(N[j] == '4') {
                N[j] = '2';
                M[j] = '2';
            }
            else {
                M[j] = '0';
            }
            ans1 = ans1*10 + N[j] - '0';
            ans2 = ans2*10 + M[j] - '0';
            ++j;
        }
        printf("Case #%d: %d %d\n", i+1, ans1, ans2);
    }
    return 0;
}