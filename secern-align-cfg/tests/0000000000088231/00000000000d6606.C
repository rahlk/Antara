#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, k;
    char a[200], b[200], n[200];
    char T[200];
    
    scanf("%s", T);
    sscanf(T, "%d", &t);
    for( i=1; i<=t; i++ )
    {
        int first = -1;
        scanf("%s", n);
        for( j=0; n[j]; j++ )
        {
            if ( n[j] == '4' )
            {
                a[j] = '3';
                b[j] = '1';
                if ( first == -1 ) first = j;
            }
            else
            {
                a[j] = n[j];
                b[j] = '0';
            }
        }
        a[j] = 0;
        for( k=first; k<j; k++ )
            b[k-first] = b[k];
        b[j-first] = 0;
        printf("Case #%d: %s %s\n", i, a, b);
    }
    return 0;
}