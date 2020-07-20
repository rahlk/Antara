#include <stdio.h>
#include <string.h>

int main(){
    
    unsigned long int n, T, a, b, i, j;
    char N[101], A[101], B[101];
    scanf("%u",&T);
    
    
    for(i = 1; i <= T; i++){
    	
        gets(N);
        
        n = atoi(N);
        
		memset(B,'0',strlen(B)); 
    	memset(A,'0',strlen(A));
		
        
        	for(j = 0; j < strlen(N);j++){
        		
				if(N[j] == '4'){
					A[j] = '1';
					B[j] = '3';	
				
				}else{
		   			B[j] = N[j];
		   			A[j] = '0';
		   		}
				
				
			}
			A[j] = '\0';
        	B[j] = '\0';
				
       		b = atoi(B);
       		
       		if(n >= 4){
				printf("case#%u: %s %u\n",i,A,b);		        	
			}else{
				i = 0;
			}
	}
    return 0;
}