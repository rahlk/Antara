#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T;
    int i = 1, len = 0, n;
    char ip[50000];
    scanf("%d", &T);
    while(i <= T){
        scanf("%d", &n);
        memset(ip, '\0', sizeof(ip));
        scanf("%s", ip);
        len = strlen(ip);
        while(len>0) {
            if(ip[len-1] == 'E') {
                ip[len-1] = 'S';
            } else {
                ip[len-1] = 'E';
            }
            len--;
        }
        printf("Case #%d: %s\n", i, ip);
        i++;
    }
    
    return 0;
}