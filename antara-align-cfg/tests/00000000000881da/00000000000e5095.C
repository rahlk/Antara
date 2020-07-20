#include <stdio.h>
#include <stdlib.h>

#define MAX_P_SIZE 99998

void invertir(char *pasos,unsigned long int P)
{
    char me[MAX_P_SIZE]={0};
    char letter_s='S',letter_e='E';
    unsigned long int i=0,elsize=0;
    while (i<P){
	if (pasos[i]==letter_s){
	    //elsize+=sprintf(me+elsize,'E');
	    printf("E");
	    i++;
	    continue;
	} else if (pasos[i]==letter_e) {
	    //elsize+=sprintf(me+elsize,'S');
	    printf("S");
	    i++;
	    continue;
	} else {
	    break;
	}
	i++;
    }
    printf("\n");
}

int main (int argc, char *argv[])
{
    unsigned int T=0,i;
    unsigned long int N=0;
    char lydia[MAX_P_SIZE]={0};

    scanf("%d",&T);
    for (i=0;i<T;i++ ) {
	scanf("%lu",&N);
	printf("El valor de N es: %ld\n",N);
	scanf("%s",lydia);
	invertir(lydia,(2*N-2));
    }
    return 0;
}
