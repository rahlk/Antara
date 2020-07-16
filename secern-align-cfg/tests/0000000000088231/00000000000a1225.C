#include <stdio.h>
#include <math.h>

int main() {
    int n, j, t;
    scanf("%d", &t);
    for(int l =1;l<=t;l++)
    {
        scanf("%d", &n);
        int a = n;
        int sum = 0;
        for (int i = 0; n > 0; i++) {
            j = n / 10;
            j = n - j * 10;
            if (j == 4) {
                j = 2;
                sum = sum + j * pow(10, i);
            }
            //  printf("%d", j);
            n = n / 10;
        }
        //printf(" ");
        printf("Case #%d: %d %d\n",l, sum, a - sum);
    }
    return 0;
}