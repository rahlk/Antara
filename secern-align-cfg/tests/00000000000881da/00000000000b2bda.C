#include <stdio.h>

int main() {
    int tc, n;
    scanf("%d", &tc);
    for(int i = 1;i <= tc;i++) {
        scanf("%d", &n);
        //char str[n];
        char ch;
        char str[2 * n - 1];
        char ans[2 * n - 1];
        scanf("%s", str);
        int j;
        for(j = 0;str[j] != '\0';j++) {
            if(str[j] == 'S')
                ans[j] = 'E';
            else 
                ans[j] = 'S';
        }
        ans[j] = '\0';
        printf("Case #%d: ", i);
        for (int j = 0;ans[j] != '\0';j++)
            printf("%c", ans[j]);
        printf("\n");
        //for(int j = 0;j < n;j++)
    }
    return 0;
}