#include<stdio.h>
#include<string.h>

int L1[50002];
int C1[50002];
int L2[50002];
int C2[50002];
int N;
int Achou;


void loop(int A, int B) {
  int I;
  int J;
  
  L2[A] = L2[A-1]+1;
  C2[A] = C2[A-1];

  if (A == B) {
    if ((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1]) && (Achou == 0)) {
 	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {

      } else {
  
  	  if (((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1])) || ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1])))  {
        Achou = 1;
      
  	    for(J=2;J<=2*N-2+1;J++) {
  	      if ((L2[J-1]+1 == L2[J]) && (C2[J-1] == C2[J])) {
		    printf("S");  	      	
		  } else {
		    printf("E");  	      	
		  }
        }
        printf("\n");
  	  }
      }

	}
    if ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1]) && (Achou == 0)) {
 	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {

      } else {
  
  	  if (((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1])) || ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1])))  {
        Achou = 1;

  	    for(J=2;J<=2*N-2+1;J++) {
  	      if ((L2[J-1]+1 == L2[J]) && (C2[J-1] == C2[J])) {
		    printf("S");  	      	
		  } else {
		    printf("E");  	      	
		  }
        }
        printf("\n");
      }
      }
	}
  } else {
  	if (Achou == 0) {
  	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {
  	  	
	  } else {
        loop(A+1,B);
	  }
	}
  }

  L2[A] = L2[A-1];
  C2[A] = C2[A-1]+1;
 
  if (A == B) {
    if ((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1]) && (Achou == 0)) {
 	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {

      } else {
  
  	  if (((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1])) || ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1])))  {
        Achou = 1;
      
  	    for(J=2;J<=2*N-2+1;J++) {
  	      if ((L2[J-1]+1 == L2[J]) && (C2[J-1] == C2[J])) {
		    printf("S");  	      	
		  } else {
		    printf("E");  	      	
		  }
        }
        printf("\n");
      }
      }
	}
    if ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1]) && (Achou == 0)) {
 	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {

      } else {
  	  if (((L2[A]+1 == L2[A+1]) && (C2[A] == C2[A+1])) || ((L2[A] == L2[A+1]) && (C2[A]+1 == C2[A+1])))  {
  
        Achou = 1;
      
  	    for(J=2;J<=2*N-2+1;J++) {
  	      if ((L2[J-1]+1 == L2[J]) && (C2[J-1] == C2[J])) {
		    printf("S");  	      	
		  } else {
		    printf("E");  	      	
		  }
        }
        printf("\n");
      }
      }
	}
  } else {
  	if (Achou == 0) {
  	  if ((L2[A] == L1[A]) && (C2[A] == C1[A]) && (L2[A-1] == L1[A-1]) && (C2[A-1] == C1[A-1]))  {
  	  	
	  } else {
        loop(A+1,B);
	  }
    }
  }

  
}

int main() {
  int T;
  int I;
  int J;
  int C;
  char P;
  scanf("%d", &T);	
  for(I=1;I<=T;I++) {
  	scanf("%d", &N);
    scanf("%c", &P);
    
    L1[1] = 1;
    C1[1] = 1;
    
  	for(J=1;J<=2*N-2;J++) {
      scanf("%c", &P);
      C = P;
	  if (C == 83) {
	    L1[J+1] = L1[J]+1;
	    C1[J+1] = C1[J];
	  } else {
	    L1[J+1] = L1[J];
	    C1[J+1] = C1[J]+1;
	  }
	}

    
  	for(J=1;J<=2*N-2;J++) {
	  L2[J+1] = 0;
	  C2[J+1] = 0;
    }
    
    L2[1] = L1[1];
    C2[1] = C1[1];
    
    L2[2*N-2+1] = L1[2*N-2+1];
    C2[2*N-2+1] = C1[2*N-2+1];
	
	if ((L1[2] == 1) && (C1[2] == 2)) {
	  L2[2] = 2;
	  C2[2] = 1;	
	} else {
	  L2[2] = 1;
	  C2[2] = 2;	
	}

	if ((L1[2*N-2] == L2[2*N-2+1]) && (C1[2*N-2] == C2[2*N-2+1]-1)) {
	  L2[2*N-2] = C1[2*N-2];
	  C2[2*N-2] = L1[2*N-2];	
	}
	
	if ((L1[2*N-2] == L2[2*N-2+1]-1) && (C1[2*N-2] == C2[2*N-2+1])) {
	  L2[2*N-2] = C1[2*N-2+1];
	  C2[2*N-2] = L2[2*N-2+1];	
	}
	
    printf("Case #%d: ", I);
    

	if (N >= 4) {
	  Achou = 0;
      loop(3,2*N-3);
	} else {
  	    for(J=2;J<=2*N-2+1;J++) {
  	      if ((L2[J-1]+1 == L2[J]) && (C2[J-1] == C2[J])) {
		    printf("S");  	      	
		  } else {
		    printf("E");  	      	
		  }
        }
    printf("\n");
	}
		

  }
  return(0);
}
