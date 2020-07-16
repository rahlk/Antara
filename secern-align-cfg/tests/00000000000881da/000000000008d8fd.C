#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
        int T;
        scanf( "%d\n" , &T );

        for (int test_case = 1; test_case <= T; test_case++)
        {
                int N;
                scanf( "%d\n" , &N );
                char c = '\0';
                printf ( "Case #%d: ", test_case );
                while( c!='\n' ){
                        c = getchar();
                        switch ( c )
                        {
                                case ( 'S' ): {
                                                       putchar ( 'E' );
                                              }break;


                                case ( 'E' ):{
                                                      putchar ( 'S' ); 
                                             };break;
                                case ( '\n' ):{
                                                      putchar ( '\n' );
                                             };break;
                        }

                }
        }

        return 0;
}
