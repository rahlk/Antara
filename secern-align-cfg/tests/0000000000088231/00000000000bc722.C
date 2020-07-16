#include <stdio.h>


int main(){
    int T;

    scanf("%d", &T);
    double A;
    double B;
    int counter = 0;
    
    for(int i=0; i<T; i++){
    	scanf("%lf", &A);
    	B = 0;
    	while(A>10){
    		counter++;
    		A = A/ 10;
    	}
    	counter++;
    	int Asx = (int)A;
    	if(counter == 0){
    		if(Asx == 4){
    			A = A-1;
    			B++;
    		}
    	}else{
    	while(counter != 0){
    	
    		if(Asx == 4){
    			A = A-1;
    			Asx = (int)A;
    			B++;
    		}else{
                Asx = (int)A;
            }
    		if(counter !=1){
    		A = A*10;
    		Asx = Asx*10;
    		B = B*10;
           
    		Asx = (int)A-Asx;

    		}
    		counter--;
	
    	}

    	
    	}
    	
    	
   
    	printf("Case #%d: %d %d\n",(i+1),(int)A,(int)B);	
    }
    
    
    
    


    
  

}
