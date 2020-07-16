//#include<stdio.h>
//#include<conio.h>
void main(){
    int T,N[99]A,B,d=4;
    printf("Enter the number of test cases: ");
    scanf("%d",&T);
    
    for(int i=1;i<=T;i++){
        scanf("%d",&N[i]);
    }
    
    /*
    for(int j=1;j<=T;j++){
        if(N%10==d){
            return(0);
        }
        else{
            
        }
        
        
    
    
    }*/
    
}
static bool isDigitPresent(int N, int d) 
    { 
          
        // Breal loop if d is present as digit 
        while (N > 0) 
        { 
            if (N % 10 == d) 
                break; 
  
            N = N /10; 
        } 
  
        // If loop broke 
        return (N > 0); 
    } 
    for (int i = 0; i <= T; i++) 
  
            // checking for digit 
            if (i == d || isDigitPresent(i, d)) 
                goto Label1; 
    } 
  