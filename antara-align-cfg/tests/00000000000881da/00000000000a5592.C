#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50001

int main(void)
{
    int t, n;
    int i, j;
    char str[MAX];
    scanf("%d", &t);
    for(i=0; i<t; i++ )
    {
        scanf("%d", &n);
        scanf("%s", str);
        for(j =0; j<2*n-2; j++)
            if(str[j] == 'S')
                str[j] = 'E';
            else
                str[j] = 'S';

        printf("Case #%d: %s\n", i+1, str);
    }
    return 0;
}
