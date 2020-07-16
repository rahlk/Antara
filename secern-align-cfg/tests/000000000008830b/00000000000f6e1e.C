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
    int pos=0;
	for(pos=P; pos<=U; pos++){
	    if(tabla[pos]==clave){
	        return pos;
	    }
	}
	return -1;
    
}

int calcular_primos(long *producto, int *lista_primos, int *mensaje_cifrado, int l) {
	long num = producto[0];
	int prime, i, j = 0, k, x;
	for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            num /= i;
        	break;
        }
    }
    if (i == num) {
    	k = 1;
    	lista_primos[0] = i;
   	}
   	else{
   		k = 2;
    	lista_primos[0] = i;
    	lista_primos[1] = num;
   	}
  
    while(producto[j] == producto[j+1]) {
    	if(j == l-2) break;
    	j++;
    }
    if(producto[j+1]%i == 0) {
    	for(x = j+1; x >= 0; x--) {
    		mensaje_cifrado[x] = i;
    		if(x == 0) break;
    		x--;
    		mensaje_cifrado[x] = num;
    	}
    }
   	else if(producto[j+1]%num == 0) {
    	for(x = j+1; x >= 0; x--) {
    		mensaje_cifrado[x] = num;
    		if(x == 0) break;
    		x--;
    		mensaje_cifrado[x] = i;
    	}
    }

    for (j = j + 1 ; j < l; j++) {
    	prime = producto[j]/(long)mensaje_cifrado[j];
    	mensaje_cifrado[j+1] = prime;
    	int aux = blin(lista_primos, 0, j, prime);
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
		mensaje[i] = 65 + blin(lista_traduccion, 0, 25, mensaje_cifrado[i]);
	}
	mensaje[i] = 0;
}
int main() {
	int *mensaje_cifrado, lista_primos[26], t, n, l, n_primos;
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