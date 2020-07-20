#include <stdio.h>
#include <string.h>

char num[105];
char ans1[105];
int main()
{
    int T;
    scanf("%d",&T);
    int CASE = 0;
    while(T--){
        int N;
        scanf("%s",num);
	N = strlen(num);
        printf("Case #%d: ",++CASE);
        int st = 0;
        int ans1len = 0;
        for(int i=0; i<N; i++) {
            if (num[i] != '4') {
                if (st != 0) {
                    putchar('0');
                }
		ans1[ans1len++] = num[i];
            }
            else{
                putchar('1');
                ans1[ans1len++] = '3';
                st = 1;
            }
        }
        ans1[ans1len] = '\0';
        putchar(' ');
        printf("%s",ans1);
        putchar('\n');
    }
    return 0;
}

