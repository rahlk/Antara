#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 101

int gcd( int a , int b ){
        int mod;
        // a >= b
        while ( 1 )
        {
                mod = a % b;
                if ( mod != 0 )
                        b = mod;
                else
                        return b;
        }
}

int cmpfunc (const void * a, const void * b) {
        return ( *(int*)a - *(int*)b );
}

int isInArray( int a , int arr[] , int size ) {

        for ( int i = 0; i < size ; i++){
                if ( arr[i] == a )
                        return 1;
        }

        return 0;
}


int main(int argc, char **argv)
{
        int T;
        scanf( "%d\n" , &T );
        for (int test_case = 1; test_case <= T; test_case++)
        {        
                int N, L;
                scanf( "%d %d\n" , &N , &L );
                unsigned int len =  2*MAXLEN*L;
                int input[ L ];
                for ( int i = 0 ; i < L ; i++  ){
                        scanf( "%d" , &input[ i ] );
                        getchar();
                }
                int decripted [ L + 1 ];
                if ( input[0] >= input[1] ){
                        decripted[1] = gcd ( input[0] , input[1] );
                } else 
                {
                        decripted[1] = gcd ( input[1] , input[0] );
                }
                decripted[0] = input[0]/decripted[1];
                for ( int i = 2; i < L + 1 ; i++  ){
                        decripted[i]=input[i-1]/decripted[i-1];
                }
                int alpha[26];

                int la = 0;
                for ( int i = 0; i < sizeof( decripted ) ; i++ ){
                        if ( isInArray( decripted[i] , alpha , la ) ) continue;
                        alpha[la] = decripted[i];
                        la++;
                        if ( la == 26 )break;
                }

                //        puts("Alphabet:");
                //        for ( int i = 0; i < 26 ; i++  )
                //                printf("%d ", alpha[i]);
                //        puts("");

                qsort( alpha , 26 , sizeof( int ), cmpfunc);

                //puts("Alphabet sorted:");
                //for ( int i = 0; i < 26 ; i++  )
                //        printf("%d ", alpha[i]);
                //putchar('\n');

                printf("Case #%d: " , test_case);
                for ( int i = 0; i < sizeof( decripted )/sizeof( decripted[0] ) ; i++ ){
                        putchar ( (int*) bsearch ( & ( decripted [ i ] ), alpha , sizeof(alpha) / sizeof(alpha[0]), sizeof (int), cmpfunc) - alpha + 'A' );
                }
                putchar('\n');
        }
        return 0;

}


