#include<stdio.h>

void workaroundsolution(long N) {
   
     long div = 0 ;
     long n ; // temp
     long multi = 1 ;
     long sum = 0 ;
     long digit = 0 ;
     int r ;
     n = N ;
     
     while ( n > 0 ) {
         
         digit = n % 10 ;
         
         if ( digit == 4 )
            digit = digit / 2 ;
         
         sum = digit * multi + sum ;
         
         n = n / 10 ;
         
         multi = multi * 10 ;
         
     }
  
     printf("%ld %ld\n",sum,(N-sum)) ;
    
    
}

int main() {
    
    long t ; // testcase 
    long N ;// jamCoins
    long i = 1 ;
    scanf("%ld",&t) ;
    while( t-- ) {
        
        scanf("%ld",&N) ;
        printf("Case #%ld: ",i) ;
        workaroundsolution(N) ;
        i++ ;
    }
    
    
}