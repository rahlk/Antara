#include <stdio.h>

int main()
{
    char digitsA[101][100];
    char digitsB[101][100];

    int tests, i , j ;
    char c;
    int counter = 0;

    scanf ("%d", &tests);
    getchar();
    for ( i=1 ; i<=tests; i++ )
    {
        counter = 0;

        while ( (c=getchar()) != '\n' )
        {
            if ( c == '4' )
            {
               digitsA[i][counter] = '2';
               digitsB[i][counter] = '2';
            }
            else
            {
                digitsA[i][counter] = c ;
                digitsB[i][counter] = '0';
            }
            counter++;
        }

        printf ("Case #%d: ", i);
        for ( j=0; j<counter ; j++)
        {
            putchar(digitsA[i][j]);
        }
        putchar(' ');
        for ( j=0; j<counter ; j++)
        {
            putchar(digitsB[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
