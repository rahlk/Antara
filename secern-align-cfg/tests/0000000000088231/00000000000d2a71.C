#include <stdio.h>
#include <stdlib.h>
int main(){

	int value=0;;
	int ct=0;
	int lunghezza_numero=0;
	int k=0;
	int scorrimento_n=0;
	int z=0;
	unsigned long minus_a=0;
	unsigned long temp_a;
	int indexMoltiplicazione=1;
	unsigned long a=0;
	unsigned long fixed_a=0;
	unsigned long b=0;
	unsigned long a_backup=0;
	scanf("%d",&ct);
	
	for(k=1;k<=ct;k++){
		indexMoltiplicazione=1;
		b=0;
		scanf("%lu",&a);
	 	fixed_a=a;
		a_backup=a;
		
			while(a>1){
			
			minus_a=a/10*10;
			if((a-minus_a)==4 ){
				/*Cifra è uguale a 4*/
				a_backup-=indexMoltiplicazione;
				
				b+=indexMoltiplicazione;	
				
			}
			a/=10;
			indexMoltiplicazione*=10;
		}
		printf("\nCase #%d: %lu %lu\n",k,a_backup,b);
		}
	}
