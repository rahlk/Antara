#include <stdio.h>
#include <stdlib.h>

void andaMapa (char mapa[][1000], int tamanho){
	int i = 0, j = 0;
	char d;
	
	while (i!=tamanho-1 || j!=tamanho-1){
		if (mapa[i][j] == 'S'){
				j++;
				printf ("E");
				d = 'S';
		}
		else if (mapa[i][j] == 'E'){
				i++;
				printf ("S");
				d = 'E';
		}
		else{
			if (mapa[i][j+1] == 'S' && j+2 >= tamanho){
				i++;
				printf ("S");
			}
			else if (mapa[i+1][j] == 'E' && i+2 >= tamanho){
				j++;
				printf ("E");
			}
			else{
				if (d == 'S'){
					i++;
          printf ("S");
				}
				else{
  				j++;
          printf ("E");
			  }
      }	
		}
	}
}

int main(){
	int testes;
	int tamanho;
	char pos;
	int i, j;
  char c;
	
	
	scanf ("%d", &testes);
	char mapa[1000][1000];

	for (pos = 1; pos<=testes; pos++){
		scanf ("%d", &tamanho);	

		for (i = 0; i<tamanho; i++)
			for (j=0; j<tamanho; j++)
				mapa[i][j] = '0';
				
    getchar();
		i = 0;
		j = 0;

		while (i!=tamanho-1 || j!=tamanho-1){
      printf ("entrou\n");
			
      scanf ("%c", &c);
      if (c== 'S'|| c== 'E'){
        mapa[i][j] = c;
        if (mapa[i][j] == 'S')
          i++;
        else
          j++;
      }
		}
    printf ("Case #%d: ", pos);
    andaMapa(mapa, tamanho);
    printf ("\n");
	
	}
	return 0;
}