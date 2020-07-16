#include <stdio.h>
#include <string.h>
char P[50000*2];
char P1[50000*2];
main()
{
        int cnt, i, j;
        scanf("%d", &cnt);
        for(i=1;i<=cnt;i++) {
                int N, len;
                scanf("%d", &N);
                scanf("%s", P);
                len = strlen(P);
                for(j=0;j < len; j++) {
                        P1[j] = (P[j] == 'S')?'E':'S';
                }
                P1[j+1] = '\0';
                printf("Case #%d: %s\n", i, P1);
        }
}
