#include <stdio.h>

int main() {
        int nTests = -1;
        scanf("%d\n", &nTests);
        
        for(int i=1; i<=nTests; i++) {
                int strLen = -1;
                scanf("%d\n", &strLen);
                char path[1024];
                scanf("%1023s\n", &path);
                for(int i=0; path[i]; i++) {
                        if(path[i] == 'S')
                                path[i] = 'E';
                        else    
                                path[i] = 'S';
                }
                printf("Case #%d: %s\n", i, path);
        }
}