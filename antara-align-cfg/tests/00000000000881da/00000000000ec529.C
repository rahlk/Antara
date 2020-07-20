#include<stdio.h>
#include<string.h>

int N;
/*
int L1[50002];
int C1[50002];
int L2[50002];
int C2[50002];
int Achou;
*/
  int Mat[30][30];
  int Vet[30][30];
  int Linha;
  int Coluna;
  int U;

void imprime(int A, int B) {
  if (Vet[A+1][B] != 0) {
    printf("S");
    if ((A == Linha) && (B == Coluna)) {
    	
	} else {
      imprime(A+1,B);
	}
  }
  
  if (Vet[A][B+1] != 0) {
    printf("E");
    if ((A == Linha) && (B == Coluna)) {
    	
	} else {
      imprime(A,B+1);
    }
  }
}

void loop(int A, int B) {
  int J;
  int K;
  int Aux;
  
  int A1;
  int B1;
  int Achou;
  
  for(J=1;J<=Linha;J++) {
      if (U == 1) {
      	break;
	  }
    for(K=1;K<=Coluna;K++) {
    	
      if (U == 1) {
      	break;
	  }
	  
      if (Vet[J][K] == A) {
        if (A+1 != B) {
          if (K+1 <= Coluna) {
          	if (Vet[J][K+1] == 0) {
          	  Aux = Vet[J][K+1];
			  Vet[J][K+1] = A + 1;
			  loop(A+1,B);
			  Vet[J][K+1] = Aux;	
			}
		  }
          if (J+1 <= Linha) {
            if (Vet[J+1][K] == 0)	{
          	  Aux = Vet[J+1][K];
			  Vet[J+1][K] = A + 1;
			  loop(A+1,B);
			  Vet[J+1][K] = Aux;	
		    }
          }
		} else {
          if (K+1 <= Coluna) {
          	if (Vet[J][K+1] == B) {
          	  Aux = Vet[J][K+1];
			  Vet[J][K+1] = A + 1;
			  //loop(A+1,B);
			  
			  Achou = 1;
			  
			  for(A1=1;A1<=Linha;A1++) {
			  	for(B1=1;B1<=Coluna;B1++) {
				  if ((Mat[A1][B1] == Vet[A1][B1]) && (Mat[A1][B1] != 0)) {
				    if ((Mat[A1+1][B1] == Vet[A1+1][B1]) && (Mat[A1+1][B1] != 0)) {
				  	  Achou = 0;	
					}
				    if ((Mat[A1][B1+1] == Vet[A1][B1+1]) && (Mat[A1][B1+1] != 0)) {
				  	  Achou = 0;	
					}
				  }
				}
			  }
			  
			  

			  for(A1=1;A1<=Linha;A1++) {
			  	for(B1=1;B1<=Coluna;B1++) {
				  if (Vet[A1][B1] != 0) {
				  	if ((Mat[A1-1][B1] != 0) || (Mat[A1][B1-1] != 0) || (Mat[A1+1][B1] != 0) || (Mat[A1][B1+1] != 0) || (Mat[A1][B1] != 0)) {
				  		
					} else {
					  Achou = 0;
					}
				  }
				}
			  }

			  
			  if (Achou == 1) {
			  	
			  	/*
			    for(A1=1;A1<=Linha;A1++) {
			  	  for(B1=1;B1<=Coluna;B1++) {
			  	    printf("%d ", Vet[A1][B1]);	
				  }
				  printf("\n");
			    }
		        printf("\n");
		        */
		        if (U == 0) {
		          U = 1;
		          imprime(1,1);
		          break;
				}
			  }
		        
			  Vet[J][K+1] = Aux;	
			}
		  }
          if (J+1 <= Linha) {
            if (Vet[J+1][K] == B)	{
          	  Aux = Vet[J+1][K];
			  Vet[J+1][K] = A + 1;
			  //loop(A+1,B);
			  Achou = 1;
			  
			  for(A1=1;A1<=Linha;A1++) {
			  	for(B1=1;B1<=Coluna;B1++) {
				  if ((Mat[A1][B1] == Vet[A1][B1]) && (Mat[A1][B1] != 0)) {
				    if ((Mat[A1+1][B1] == Vet[A1+1][B1]) && (Mat[A1+1][B1] != 0)) {
				  	  Achou = 0;	
					}
				    if ((Mat[A1][B1+1] == Vet[A1][B1+1]) && (Mat[A1][B1+1] != 0)) {
				  	  Achou = 0;	
					}
				  }
				}
			  }
			  
			  
			  for(A1=1;A1<=Linha;A1++) {
			  	for(B1=1;B1<=Coluna;B1++) {
				  if (Vet[A1][B1] != 0) {
				  	if ((Mat[A1-1][B1] != 0) || (Mat[A1][B1-1] != 0) || (Mat[A1+1][B1] != 0) || (Mat[A1][B1+1] != 0) || (Mat[A1][B1] != 0)) {
				  		
					} else {
					  Achou = 0;
					}
				  }
				}
			  }



			  if (Achou == 1) {
			  	
			  	/*
			    for(A1=1;A1<=Linha;A1++) {
			  	  for(B1=1;B1<=Coluna;B1++) {
			  	    printf("%d ", Vet[A1][B1]);	
				  }
				  printf("\n");
			    }
		        printf("\n");
		        */
		        if (U == 0) {
		          U = 1;
		          imprime(1,1);
		          break;
				}
			  }
			  Vet[J+1][K] = Aux;	
		    }
          }
		}	
	  }
    }
  }
  
  /*
  
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
*/
}


int main() {
  int T;
  int I;
  char P;
  int J;
  int K;
  int C;
  int Cont;

  scanf("%d", &T);	
  for(I=1;I<=T;I++) {
  	scanf("%d", &N);
    scanf("%c", &P);
    
  	for(J=1;J<=2*N-2;J++) {
      for(K=1;K<=2*N-2;K++) {
        Mat[J][K] = 0;
        Vet[J][K] = 0;
      }
    }
    
    Linha = 1;
    Coluna = 1;
    Cont = 1;
    Mat[Linha][Coluna] = Cont;
    
  	for(J=1;J<=2*N-2;J++) {
      scanf("%c", &P);
      C = P;
	  if (C == 83) {
	  	Linha = Linha + 1;
	  	Cont = Cont + 1;
	  	Mat[Linha][Coluna] = Cont;
	  } else {
	  	Coluna = Coluna + 1;
	  	Cont = Cont + 1;
	  	Mat[Linha][Coluna] = Cont;
	  }
	}
/*
    for(J=1;J<=Linha;J++) {
      for(K=1;K<=Coluna;K++) {
        printf("%d ", Mat[J][K]);
	  }
	  printf("\n");
	}

    printf("\n");
*/
    
    
	Vet[1][1] = Mat[1][1];
	Vet[Linha][Coluna] = Mat[Linha][Coluna];


    if (Mat[1][2] == 2) {
      Vet[2][1] = 2;
	} else {
      Vet[1][2] = 2;	
	}



    if (2*N-2 >= 4) {
      if (Mat[Linha-1][Coluna] == Vet[Linha][Coluna]) {
        Vet[Linha][Coluna-1] = Vet[Linha][Coluna] - 1;
	    for(J=1;J<=Linha-1;J++) {
	  	  Vet[J][Coluna] = 0;
	    }	
	
	  } else {
        Vet[Linha-1][Coluna] = Vet[Linha][Coluna] - 1;
	    for(J=1;J<=Coluna-1;J++) {
	  	  Vet[Linha][J] = 0;
	    }	
	  }
	}
	
    printf("Case #%d: ", I);

	U = 0;
	if (Mat[Linha][Coluna] >= 5) {
	  loop(2,Mat[Linha][Coluna]-1);
	} else {
		
		imprime(1,1);
		
	}

/*
    for(J=1;J<=Linha;J++) {
      for(K=1;K<=Coluna;K++) {
        printf("%d ", Vet[J][K]);
	  }
	  printf("\n");
	}

    printf("\n");
*/
	
    
    printf("\n");
		

  }
  return(0);
}
