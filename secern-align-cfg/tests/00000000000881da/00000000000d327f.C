#include <stdio.h>

char buf[100010];
char res[100010];

int main(){
    int case_count;
    scanf("%d", &case_count);
    for(int i = 1; i <= case_count; i++) {
        int n = 0;
        scanf("%d", &n);
        scanf("%s", buf);
        for (int j = 0; j < n; j++) {
            if (buf[j] == 'E')
                res[j] = 'S';
            else
                res[j] = 'E';
        }
        res[n] = '\0';
        printf("Case #%d: %s\n", i, res);
        getchar();
    }
    return 0;
}