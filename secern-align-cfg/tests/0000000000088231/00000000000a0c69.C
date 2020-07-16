#include<stdio.h>
int main()
{
    int T;
    char N[102];
    int i;
    int A[102], B[102];
    int len;
    int Case;
	freopen("input.txt", "r", stdin);
    scanf("%d", &T);
    for (Case=1; Case<=T; Case++) {
        scanf("%s", N);
        for (len=0; N[len]; len++);
        for (i=0; i<len; i++) {
            if ('4' == N[i]) {
                A[i] = 2;
                B[i] = 2;
            }
            else {
                A[i] = N[i]-'0';
                B[i] = 0;
            }
        }
        printf("Case #%d: ", Case);
        for (i=0; i<len; i++)
        printf("%d", A[i]);
        printf(" ");
        for (i=0; 0 == B[i]; i++);
        for (; i<len; i++)
        printf("%d", B[i]);
        printf("\n");
    }
    return 0;
}
