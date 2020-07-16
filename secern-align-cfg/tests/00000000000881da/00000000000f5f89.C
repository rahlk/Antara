#include <stdio.h>
#include <stdlib.h>

void andaMapa (char mapa[][1000], int tamanho){
	int i = 0, j = 0;
  char p;
while (i!=tamanho-1 || j!=tamanho-1){
    if (mapa[i][j] == 'S'){
			if (j+1<tamanho){
				j++;
				printf ("E");
        p = 'S';
			}
        
		}
		else if (mapa[i][j] == 'E'){
			if (i+1<tamanho){
				i++;
				printf ("S");
        p = 'E';
			}
		}
		else{
      if (p == 'E'){
			  if (j+1<tamanho){
				  j++;
				  printf ("E");
			  }
      }
      else{
        
          if (i+1<tamanho){
            i++;
            printf ("S");
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
			for (j= 0; j<tamanho; j++)
				mapa[i][j] = '0';
				
    getchar();
		i = 0;
		j = 0;

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
    printf ("Case #%d: ", pos);
    andaMapa(mapa, tamanho);
    printf ("\n");

		
	}
	return 0;
}