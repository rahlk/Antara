#include<stdio.h>
#include<string.h>
#include<math.h>

int procurarprimo(int primos[], int p){
    for(int i=0;i<26;i++){
        if (p == primos[i]){
            return 0;
        }
    }
    return 1;
}

int ehprimo(int num){
	int div = 0;
	for (int i = 1; i <= (num); i++) {
   		if (num % i == 0){
     			div++;
    		}
  	}
  	if (div == 2){
 	   return 1;
	}
	else{
		return 0;
	}
}

void ordenarvetor(int copia[],int L){
	int temp;
	for(int i=0;i<L; i++){
		for(int j=i+1;j<L;j++){
			if (copia[i]>copia[j]){
				temp=copia[i];
				copia[i]=copia[j];
				copia[j]=temp;
			}
		}
	}
}

int main(int argc, char *argv[]){
    int T, N, L, n_p, i, j, k, l, a, b, c, d, pos;
    char alf[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d", &T);
    for(i=0; i<T; i++){
    	scanf("%d %d", &N, &L);
        int codigo[L];
        int primos[26];
        char resposta[L+2];
        for(j=0;j<L;j++){
        	scanf("%d", &codigo[j]);
        }
        n_p = 0;
        for(j = 0; n_p < 26 ;){
          for(k = 3; k< sqrt(codigo[j]); k++){
            if(codigo[j]%k == 0){
              if(ehprimo(k)){
                if(procurarprimo(primos,k)){
                  primos[n_p] = k;
		            	n_p++;
                }
                if(ehprimo(codigo[j]/k) && procurarprimo(primos, codigo[j]/k)){
                  primos[n_p] = codigo[j]/k;
                  n_p++;
                }
                j++;
		break;
              }
            }
          }
        }
        ordenarvetor(primos, 26);
        pos = 0;
        for(j = 0; j < L+1; j+=3){
          for(k=0; k<26; k++){
		        if(codigo[j]%primos[k] == 0){
			       	a = k;
			       	for(l=0; l<26; l++){
				        if(codigo[j]/primos[k] == primos[l]){
					        b = l;
                  break;
				        }
			        }
		        }
		        if(codigo[j+1]%primos[k] == 0){
			        c = k;
			        for(l=0; l<26; l++){
				        if(codigo[j+1]/primos[k] == primos[l]){
					        d = l;
                  break;
				        }
			   	    }
		        }
          }
          if(a==c){
            resposta[pos] = alf[b];
		  	    resposta[pos+1] = alf[a];
		   	    resposta[pos+2] = alf[d];
		       	pos+=3;
		    }
		    else{
		        if(a==d){
			        resposta[pos] = alf[b];
              resposta[pos+1] = alf[a];
			        resposta[pos+2] = alf[c];
			   	    pos+=3;
			   	}
    			else{
			        if(b==c){
                resposta[pos] = alf[a];
		       		  resposta[pos+1] = alf[b];
			    	    resposta[pos+2] = alf[d];
			   		    pos+=3;
			   	    }
			   	   	else{
                if(b==d){
                    resposta[pos] = alf[a];
			           		resposta[pos+1] = alf[b];
			           		resposta[pos+2] = alf[c];
                    pos+=3;
			           	}
                }
			   	}
		    }
    	}
    	if((L+1)%3 != 0){
    	    if((L+1)%3 == 2){
    	        for(k=0; k<26; k++){
		            if(codigo[L-2]%primos[k] == 0){
			       	    a = k;
			       	    for(l=0; l<26; l++){
				            if(codigo[L-2]/primos[k] == primos[l]){
					            b = l;
					break;
				            }
			            }
		            }
		            if(codigo[L-1]%primos[k] == 0){
			            c = k;
			            for(l=0; l<26; l++){
				            if(codigo[L-1]/primos[k] == primos[l]){
					            d = l;
						break;
				            }
			   	        }
		            }
		        }
		        if(a==c){
	    	   	    resposta[L] = alf[a];
    		    }
		        else{
		            if(a==d){
			            resposta[L] = alf[a];
    			   	}
        			else{
		    	        if(b==c){
			                resposta[L] = alf[b];
    			   	    }
			   	   	    else{
			           	    if(b==d){
					            resposta[L] = alf[b];
                           	}
			            }
			   	    }
		        }
    	    }
    	    else{
    	        for(k=0; k<26; k++){
		            if(codigo[pos-4]%primos[k] == 0){
			       	    a = k;
			       	    for(l=0; l<26; l++){
				            if(codigo[pos-4]/primos[k] == primos[l]){
					            b = l;
				            }
			            }
		            }
		            if(codigo[pos-3]%primos[k] == 0){
			            c = k;
			            for(l=0; l<26; l++){
				            if(codigo[pos-3]/primos[k] == primos[l]){
					            d = l;
				            }
			   	        }
		            }
		        }
		        if(a==c){
		            resposta[L-1] = alf[a];
	    	   	    resposta[L] = alf[d];
    		    }
		        else{
		            if(a==d){
		                resposta[L-1] = alf[a];
			            resposta[L] = alf[c];
    			   	}
        			else{
		    	        if(b==c){
		                    resposta[L-1] = alf[b];
			                resposta[L] = alf[d];
			            }
			   	   	    else{
			           	    if(b==d){
		                        resposta[L-1] = alf[b];
			                    resposta[L] = alf[c];
			                }
			            }
			   	    }
		        }
    	    }
    	}
	printf("case #%d: ",i+1);
		fflush(stdout);
        for(j=0;j < L+2;j++){
            printf("%c", resposta[j]);
        	fflush(stdout);
	}
	printf("\n");
	fflush(stdout);
    }
}
