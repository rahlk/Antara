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
  
  scanf("%d", &N);
  
  for(I=1;I<=N;I++) {
    scanf("%d", &P);

    for(J=1;J<=P;J++) {
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

	  C = B;
	  while(C != 0) {
	  	if (C % 10 == 4) {
	  	  Achou = 1;
		}
	  	C = C / 10;
	  }

      if (Achou == 0) {
      	printf("Case #%d: %d %d\n", I, A, B);
      	break;
	  }
	    
	}    
  }
  return(0);
}
