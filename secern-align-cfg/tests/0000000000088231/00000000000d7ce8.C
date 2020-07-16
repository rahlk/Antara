#include <stdio.h>
#include <string.h>

int main(){
    
    int T, a, b, i, j;
    char N[101], A[101], B[101];
    scanf("%d",&T);
    
    
    for(i = 1; i <= T; i++){
    	fflush(stdin);
        gets(N);
        fflush(stdin);
		memset(B,'0',strlen(B)); 
    	memset(A,'0',strlen(A));
		
        
        	for(j = 0; j < strlen(N);j++){
        		
				if(N[j] == '4'){
					A[j] = '3';
					B[j] = '1';	
				
				}else{
		   			B[j] = N[j];
		   			A[j] = '0';
		   		}
				
				
			}
			A[j] = '\0';
        	B[j] = '\0';
				
       		b = atoi(B);
       		
        printf("case#%d: %d %d\n",i,a,b);
	}
    
    
    return 0;
	
}
