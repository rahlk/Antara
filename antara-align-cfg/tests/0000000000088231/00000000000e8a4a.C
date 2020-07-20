#include <stdio.h>


int main(){
    
    unsigned int n, T, a, b, i, j;
    
    scanf("%u",&T);
    
    
    for(i = 1; i <= T; i++){
    	scanf("%u",&n);
        		
		a = n/2;
		b = n/2;
		if(n%2 != 0){
        	b++;
		}
 		if(a >= 400000 && a < 500000){
 			a += 100000;
			b -= 100000;
		}else if(a >= 40000 && a < 50000){
 			a += 10000;
			b -= 10000;
		}else if(a >= 4000 && a < 5000){
 			a += 1000;
			b -= 1000;
		}else if(a >= 400 && a < 500){
 			a += 100;
			b -= 100;
		}else if(a >= 40 && a < 50){
 			a += 10;
			b -= 10;
		}
		
		printf("case#%d: %u %u\n",i,a,b);	
        }
        
			        			        
	
    
    
    return 0;
	
}