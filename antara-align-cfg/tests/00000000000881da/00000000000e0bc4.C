#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int t,tt;
    scanf("%d", &t);

    for (tt = 1; tt <= t; tt++)
    {
        int dim,i;
        char path[4000],res[4000];
        scanf("%d",&dim);
        scanf("%s",path);
        for(i=0;i<strlen(path);i++){
            if (path[i] == 'E')
                res[i] = 'S';
            else if (path[i] == 'S')
                res[i] = 'E';
        }
        printf("Case #%d: %s\n",tt,res);
    }
    return 0;
}