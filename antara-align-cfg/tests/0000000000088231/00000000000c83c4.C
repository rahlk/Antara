#include<stdio.h>

int main() {
    int T, N;
    int i, j;
    int len;
    char numArray[102] = {0};
    char ans1[102] = {0}, ans2[102] = {0};
    scanf("%d\n", &T);
    for(i = 0; i < T; i++) {
        fgets(numArray, 102, stdin);
        len = strlen(numArray) - 1;
        for(j = 0; j < len; j++) {
            if(numArray[j] == '4') {
                ans1[j] = '3';
                ans2[j] = '1';
            } else {
                ans1[j] = numArray[j];
                ans2[j] = '0';
            }
        }
        printf("Case #%d: ", i+1);
        for(j = 0; j < len; j++) {
            printf("%c", ans1[j]);
        }
        printf(" ");
        int flag = 0;
        for(j = 0; j < len; j++) {
            if(flag == 0 && ans2[j] != '0') {
                flag = 1;
            } 
            if(flag != 0) {
                printf("%c", ans2[j]);
            }
        }
        printf("\n");
    }
    return 0;
}