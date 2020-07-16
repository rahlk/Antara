#include <stdio.h>

char steps[101][100000];

int main()
{
    int tests, size, i , j ;
    char c;
    int counter = 0;

    scanf ("%d", &tests);

    for ( i=1 ; i<=tests; i++ )
    {
        scanf ("%d", &size);
        getchar();

        counter = 0;

        while ( (c=getchar()) != '\n' )
        {
            if ( c == 'E' )
                steps[i][counter] = 'S' ;
            else if ( c == 'S' )
                steps[i][counter] = 'E' ;
            counter++;
        }

        printf ("Case #%d: ", i);
        for ( j=0; j<counter ; j++)
        {
            putchar(steps[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
