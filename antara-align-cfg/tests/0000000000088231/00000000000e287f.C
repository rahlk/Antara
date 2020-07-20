#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ATOI( x )  (x) - 0x30
 
int main(int argc, char** argv){
    int a = 0, b = 0;
    int input_num = 0;
    int column = 0;
    int pwr = 1;
    int found_4 = 0;
    int start = 0;
    
    for( int i = 1; i < argc; i++){

        while( argv[i][column] != '\n' ){
            while( (argv[i][column] != ' ') || (argv[i][column] != '\t') ){
                column++;
            }
            
            if( (argv[i][column] >= 0x30)  && (argv[i][column] < 0x3a) ){
                if (argv[i][column] == 0x34){
                    found_4 = 1;
                }
                input_num+= (pwr * ATOI(argv[i][column]) );
                pwr *= 10;
            }
            
            if( !found_4 ){
                break;
            }else {
                a = input_num - 3;
                b = 3;
            printf( "Case #%d: %d %d\n", i, a, b );
        
            }
        }
       
        return 0;
        
        
        
    }
}