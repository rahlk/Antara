#include <stdio.h>
#include <string.h>
main()
{
        int i, cnt, j, N, sc;
        char buf[102], sub[102];
        scanf("%d", &cnt);
        for(i=1; i<=cnt; i++) {
                scanf("%s", buf);
                N = strlen(buf);
                sc = -1;
                for(j=0;j<N;j++) {
                        if (buf[j] == '4') {
                                buf[j] = '3';
                                sub[j] = '1';
                                if (sc == -1)
                                        sc = j;
                        } else {
                                sub[j] = '0';
                        }
                        sub[j+1] = '\0';
                }
                printf("Case #%d: %s %s\n", i, buf, &sub[sc]);

        }
}