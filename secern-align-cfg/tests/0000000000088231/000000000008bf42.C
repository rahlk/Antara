#include <stdio.h>
#include <string.h>

#define MAXLEN 101
// 10^n 1<n zeroes>

int main(int argc, char **argv)
{
        char num1[ MAXLEN ];
        char num2[ MAXLEN ];
        int T;
        scanf( "%d\n" , &T );

        for (int test_case = 1; test_case <= T; test_case++)
        {
                int N;
                int len = 0;
                memset( num1 , 0 , MAXLEN );
                memset( num2 , 0 , MAXLEN );
                char c = '\0';
                char *p = NULL;
                while( c!='\n' ){
                        c = getchar();
                        switch ( c )
                        {
                                case ('\n' ): {
                                                      num1[ len ] = '\0';
                                                      num2[ len ] = '\0';
                                              }break;


                                case ( '4' ):{
                                                     num1[ len ] = '2';
                                                     num2[ len ] = '2';
                                                     if ( p == NULL ) p = num2 + len;
                                                     len++; 
                                             };break;
                                default:{
                                                num1 [ len ] = c;
                                                num2 [ len ] = '0';
                                                len++; 
                                        }
                        }

                }
                //printf ( "#Case %d %s %s\n", test_case , num1 , num2 );
                printf ( "Case #%d: %s %s\n", test_case , num1 , p );
        }

        return 0;
}
