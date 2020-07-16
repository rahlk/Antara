#include<stdio.h>
#include<string.h>

int main() {
  int N;
  int I;
  int J;
  int K;
  int P;
  int A;
  int B;
  int C;
  int Achou;
  
  int T1;
  int T2;
  
  scanf("%d", &N);
  
  for(I=1;I<=N;I++) {
    scanf("%d", &P);

	Achou = 1;
	
	J = 1;
	
    while(Achou != 0) {
    	
      A = J;
	  B = P - J;
	  
	  Achou = 0;
	  
	  C = A;
	  while(C != 0) {
	  	if (C % 10 == 4) {
	  	  Achou = 1;
		}
	  	C = C / 10;
	  }

	  T2 = 0;
	  
	  C = B;
	  while(C != 0) {
	  	T2 = T2 + 1;
	  	if (C % 10 == 4) {
	  	  Achou = 1;
	  	  
	  	  
		}
	  	C = C / 10;
	  }

      if (Achou == 0) {
      	printf("Case #%d: %d %d\n", I, A, B);
      	break;
	  } else {

	    T1 = 0;
	    
	    if (A == 3) {
	      T1 = 2;
		}
	    if (A == 39) {
	      T1 = 11;
		}
	    if (A == 399) {
	      T1 = 101;
		}
	    if (A == 3999) {
	      T1 = 1001;
		}
	    if (A == 39999) {
	      T1 = 10001;
		}
	    if (A == 399999) {
	      T1 = 100001;
		}
	    if (A == 3999999) {
	      T1 = 1000001;
		}
	    if (A == 39999999) {
	      T1 = 10000001;
		}
	    if (A == 399999999) {
	      T1 = 100000001;
		}

	    if (T1 == 0) {
	      T1 = 1;
		}			  	

	    T2 = 0;
	    
	    if (B == 5) {
	      T2 = 2;
		}
	    if (B == 50) {
	      T2 = 11;
		}
	    if (B == 500) {
	      T2 = 101;
		}
	    if (B == 5000) {
	      T2 = 1001;
		}
	    if (B == 50000) {
	      T2 = 10001;
		}
	    if (B == 500000) {
	      T2 = 100001;
		}
	    if (B == 5000000) {
	      T2 = 1000001;
		}
	    if (B == 50000000) {
	      T2 = 10000001;
		}
	    if (B == 500000000) {
	      T2 = 100000001;
		}

	    if (T2 == 0) {
	      T2 = 1;
		}			  	

		if (T1 >= T2) {
		  J = J + T1;
		} else {
		  J = J + T2;
		}
		
        
	  }
	    
	}
  }
  return(0);
}
