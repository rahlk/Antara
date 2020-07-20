#include <stdio.h>
#include <stdlib.h>

void andaMapa (char mapa[1100][1100], int tamanho, char *a){
	int i = 0, j = 0;
	char d;
  int cont = 0;
	
	while ((i!=tamanho-1 || j!=tamanho-1)){
		switch (mapa [i][j]){
			case 'S':
				j++;
				a[cont] = 'E';
				cont++;
				d = 'S';
				break;
			case 'E':
				i++;
				a[cont] = 'S';
				cont++;
				d = 'E';
				break;
			default:
				if (mapa[i][j+1] == 'S' && j+2 >= tamanho){
					i++;
					a[cont] = 'S';
				  cont++;
				}
				else if (mapa[i+1][j] == 'E' && i+2 >= tamanho){
					j++;
					a[cont] = 'E';
				  cont++;
				}
				else{
					if (d == 'S'){
							i++;
							a[cont] = 'S';
				      cont++;
					}
					else{
							j++;
							a[cont] = 'E';
				      cont++;
					}
				}
				break;
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
	char mapa[1100][1100];

	for (pos = 1; pos<=testes; pos++){
		scanf ("%d", &tamanho);	

		for (i = 0; i<tamanho; i++)
			for (j=0; j<tamanho; j++)
				mapa[i][j] = '0';
				
    //getchar();
		i = 0;
		j = 0;

    char *a = (char*)malloc ((2 * tamanho) * sizeof(char));

		while (i!=tamanho-1 || j!=tamanho-1){
			
      scanf ("%c", &c);
      if (c== 'S'|| c== 'E'){
        mapa[i][j] = c;
        if (mapa[i][j] == 'S')
          i++;
        else
          j++;
      }
		}
	andaMapa(mapa, tamanho, a);
	a[(2 * tamanho)-1] = '\0';
    printf ("Case #%d: %s", pos, a);
    
    printf ("\n");
    free (a);
	}
	return 0;
}