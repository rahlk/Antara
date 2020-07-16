#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* tabla, int ip, int iu){
    
    int i = 0, j = 0, k = 0;

    for (i = iu; i > ip; i--){
        
        for (j = ip; j < i; j++){
            
            if (tabla[j] > tabla[j+1]){
                
                k=tabla[j];
                tabla[j]=tabla[j+1];
                tabla[j+1]=k;
                
            }
        }
    }
     
}

int blin(int *tabla,int P,int U,int clave){
    int pos=0, ob=0;
	for(pos=P; pos<=U; pos++){
		ob++;
	    if(tabla[pos]==clave){
	        return pos;
	    }
	}
	return -1;
    
}

int bbin(int *tabla,int P,int U,int clave){
	int M=0;
	if(P==U){
	    if(tabla[0]==clave){
	     	return 0;
	    }
	    else{
	    	return -1;
	    }
	}
	while(P<=U){
		M=(P+U)/2;
		if(tabla[M]==clave){
			return M;	
		}
		else if(clave<tabla[M]){
			U=M-1;
		}
		else if(clave>tabla[M]){
			P=M+1;
		}
	}
	return -1;
}

int calcular_primos(long *producto, int *lista_primos, int *mensaje_cifrado, int l) {
	long num = producto[0];
	int prime, i;
	for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            num /= i;
        	break;
        }
    }

    lista_primos[0] = i;
    int k = 1;
    if (num != i) {
    	lista_primos[1] = num;
    	k=2;
    }
    
    mensaje_cifrado[0] = i;
    mensaje_cifrado[1] = num;
    for (int j = 2; j <= l; j++) {
    	prime = producto[j-1]/(long)mensaje_cifrado[j-1];
    	mensaje_cifrado[j] = prime;
    	int aux = blin(lista_primos, 0, j-1, prime);
    	if(aux == -1) {
    		lista_primos[k] = prime;
    		k++;
    	}
    }
    return k;
}


void traducir_cadena(char *mensaje, int *lista_traduccion, int *mensaje_cifrado, int l) {
	int i;
	for (i = 0; i <= l; i++) {
		mensaje[i] = 65 + bbin(lista_traduccion, 0, 26, mensaje_cifrado[i]);
	}
	mensaje[i] = 0;
}
int main() {
	int *mensaje_cifrado, lista_primos[27], t, n, l, n_primos;
	char *mensaje;
	long *producto;
	scanf("%d", &t);
	for(int j = 0; j < t; j++) {
		scanf("%d %d", &n, &l);
		producto = malloc(l * sizeof(long));
		mensaje_cifrado	= malloc((l+1) * sizeof(int));
		mensaje = malloc((l+2) * sizeof(char));

		for(int k=0; k < l; k++)
		    scanf("%ld", &producto[k]);
		int n_primos = calcular_primos(producto, lista_primos, mensaje_cifrado, l);
		BubbleSort(lista_primos, 0, n_primos-1);
		traducir_cadena(mensaje, lista_primos, mensaje_cifrado, l);
		printf("Case #%d: %s\n", j+1, mensaje);
		free(producto);
		free(mensaje_cifrado);
		free(mensaje);
		producto = NULL;
		mensaje_cifrado = NULL;
		mensaje = NULL;
	}
	return 0;
}