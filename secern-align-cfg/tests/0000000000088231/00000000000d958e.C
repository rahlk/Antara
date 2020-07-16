#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int T;
    scanf("%d", &T);
    char a[T][101];
    for(int z = 0 ; z < T ; z++){
        scanf("%s", &a[z]);
    }
    for(int z = 0 ; z < T ; z++){
        int i = 0;
        while(a[z][i] != '\0') i++;
        char s[i + 1], w[i + 1];
        s[i] = '\0', w[i] = '\0';
        for(int j = i - 1 ; j >= 0 ; j--){
            if(a[z][j] - '0' == 4) s[j] = '1';
            else s[j] = '0';
        }
        for(int j = i - 1 ; j >= 0 ; j--){
            if(a[z][j] >= s[j]) w[j] = a[z][j] - s[j] + '0' ;
            else {
                int p = j - 1, l;
                while(a[z][p] < s[p])p--;
                a[z][p] -= '0' + 1;
                for(l = p + 1 ; l < j ; l++)a[z][l] -= '0' - 9;
                a[z][l] -= '0' - 10;
                j--;
            }
        }
        char x[i], m = 0;
        bool c = false;
        for(int j = 0 ; s[j] != '\0' ; j++){
            if(c == false){
                if(s[j] - '0' != 0) c = true, j--;
            } else x[m] = s[j], m++;
        }
        x[m] = '\0';
        printf("Case #%d: %s %s\n", z + 1, x, w);
    }
    return 0;
}
