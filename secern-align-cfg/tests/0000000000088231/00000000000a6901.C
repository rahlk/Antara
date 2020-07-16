#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char buffer[ 100 ],
       buffer1[100 ],
       buffer2[100 ];;
  fgets( buffer,  sizeof buffer-1, stdin );
  int T = atoi( buffer );
  for( int i = 0; i < T; i++ ) {
    printf( "Case #%d: ", i+1 );
    fgets( buffer,  sizeof buffer-1, stdin );
    int p=1, N = atoi( buffer );
    for( ; sprintf( buffer1, "%d",p ),
           sprintf( buffer2, "%d",N-p),
           strchr( buffer1, '4' ) || strchr( buffer2, '4' ); p++ );
    printf( "%d %d\n", p, N-p );
  }
}