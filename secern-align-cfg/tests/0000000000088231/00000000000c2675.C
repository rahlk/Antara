#include <ctype.h>
#include <stdio.h>

#define N 1488

char s[N], a[N], b[N];

int
main(){
    int T;
    scanf("%d\n", &T);
    for(int id = 1; id <= T; id++){
        fgets(s, N, stdin);
        int n = strlen(s);
        while(!isdigit(s[n - 1]))--n;
        for(int i = 0; i < n; i++){
            if(s[i] == '4'){
                a[i] = '3';
                b[i] = '1';
            }
            else{
                a[i] = s[i];
                b[i] = '0';
            }
        }
        int j = 0;
        while(b[j] == '0')++j;
        printf("Case #%d: ", id);
        for(int i = 0; i < n; i++)
            putc(a[i], stdout);
        putc(' ', stdout);
        for(int i = j; i < n; i++)
            putc(b[i], stdout);
        putc('\n', stdout);
    }
}