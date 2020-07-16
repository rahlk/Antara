#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void pylon(int r,int c) {
    int small = r  ;
    int divi = 0 ;

    int x = 0 ; 
    int y = 0 ;
    
    if( r == c ) {
       printf("IMPOSSIBLE\n") ;
       return ;
    }
    
    if ( small > c)
          small = c ;
    
    if ( c > r ) {
         divi = round( c / r ) ;

    }
    else if ( r > c) {
         divi = round( r / c ) ;
       
    }    
    if ( divi == small ) {
       printf("IMPOSSIBLE\n") ;
       return ;
    }
    
    
   
    printf("POSSIBLE\n") ;
    
      x =  0 ;
      y = 0 ;
     
    
    for ( int i = 1 ; i <= r * c ; i++ )
    {
        if ( i % 2 == 0 ) {
           
             x = abs ( x + r - divi ) ;
             y = abs (y + divi) ;
             printf("%d %d\n",x,y) ;
        }
        else 
        {
             x = abs ( x - r - divi ) ;
             y = abs (y - divi - 1) ;
             printf("%d %d\n",x,y) ;
            
        }
    }
       
        
    
    
    
    
    
    
}


int main(void) {
	
	int t,r,c,i = 1 ;
	scanf("%d",&t) ;
	while ( t-- ) {
	    
	    scanf("%d%d",&r,&c) ;
	    printf("Case #%d: ",i) ;
	    pylon(r,c) ;
	    i++ ;
	    
	}
 	
	
	
	
	return 0;
}

