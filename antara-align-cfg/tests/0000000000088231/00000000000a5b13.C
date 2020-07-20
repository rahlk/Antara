#include <stdio.h>
#include <string.h>

int tc, cnt;
int a[101];
int b[101];
char n[101];
int s[10][2];
int l;
int i;

int main(void)
{
    s[0][0] = 0; s[0][1] = 0;
    s[1][0] = 1; s[1][1] = 0;
    s[2][0] = 2; s[2][1] = 0;
    s[3][0] = 2; s[3][1] = 1;
    s[4][0] = 2; s[4][1] = 2;
    s[5][0] = 3; s[5][1] = 2;
    s[6][0] = 3; s[6][1] = 3;
    s[7][0] = 5; s[7][1] = 2;
    s[8][0] = 5; s[8][1] = 3;
    s[9][0] = 6; s[9][1] = 3;

    scanf("%d", &tc);
    for (int t=1; t<=tc; t++) {
        cnt = 0;
        scanf("%s", n);
        l = strlen(n);
        for (i=0; i<l; i++) {
            a[i] = s[n[i]-'0'][0];
            b[i] = s[n[i]-'0'][1];
        }
        printf("Case #%d: ", t);
        for (i=0; i<l; i++)
            if (a[i] != 0) 
                break;
        for (;i<l; i++)
            printf("%d", a[i]);
        printf(" ");
        for (i=0; i<l; i++)
            if (b[i] != 0) 
                break;
        for (;i<l; i++)
            printf("%d", b[i]);
        printf("\n");
    }
    return 0;
}