#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int t, n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        scanf("%d", &n);
        char p[2*n - 1];
        scanf("%s", p);
        for(int j = 0; p[j] != 0 ; j++)
            if(p[j] == 'E')
                p[j] = 'S';
            else
                p[j] = 'E';
        printf("Case #%d: %s\n",i,p);
    }
    return 0;
}