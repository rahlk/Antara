#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int t=0; t<T; t++) {
        int N1;
        scanf("%d", &N1);
        N1--;

        char path[100000]; // Lydia's path. length up to 2*50000-2 = 99998 char.
        scanf("%s", path);

        char mypath[100000];
        mypath[2*N1] = '\0';

        char start = path[0];
        char other = start == 'E' ? 'S' : 'E';

        if(path[2*N1-1] != start) {
            // S... then E...
            memset(mypath, other, N1);
            memset(mypath+N1, start, N1);
        }
        else { // path[2*N-3] == 'E'
            // Must find 2 consecutive S to cross the path
            char search[] = {other, other, '\0'};
            char* line = strstr(path, search);
            int pos = 1;
            for(char *j=path; j<line; j++) {
                if(*j == other) pos++;
            }
            // So: SSS...(pos times) EEE...(N-1 time) SSS(N-1-pos times)...
            memset(mypath, other, pos);
            memset(mypath+pos, start, N1);
            memset(mypath+pos+N1, other, N1-pos);
        }

        printf("Case #%d: %s\n", t+1, mypath);
    }

    return 0;
}
