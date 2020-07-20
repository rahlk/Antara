/*******
 * Read input from STDIN
 * Use: printf(...) or fprintf( stdout, ...) to output your result to stdout.
 * Use: fprintf(stderr, ...);  to output debugging information to stderr.
 * ***/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int N=0;
int nb_cas = 0;
int nb_pers = 0;
int x = 0;
int y = 0;
char direc = ' ';

int main() {

    scanf("%d", &nb_cas);
	//printf("nb cas : %d\n", nb_cas);
	for(int i=0; i<nb_cas; i++){
		
		scanf("%d %d", &nb_pers, &N);
		//printf("nb personne cas %d : %d et matrice taille : %d\n", i+1, nb_pers, N);
		int matrice[N][N];
		for(int c=0; c<N; c++){
			for(int d=0; d<N; d++){
				matrice[c][d]=0;
			}
		}

		for(int j=0; j<nb_pers; j++){
		
			scanf("%d %d %c", &x, &y, &direc);
			//printf("%d %d %c\n", x, y, direc);
			if(nb_pers==1){
				switch(direc){
					case 'N' :
						printf("Case %d: %d %d\n", i+1, 0, y+1);
						break;
					case 'S' :
						printf("Case %d: %d %d\n", i+1, 0, 0);
						break;
					case 'E' :
						printf("Case %d: %d %d\n", i+1, x+1, 0);
						break;
					case 'W' :
						printf("Case %d: %d %d\n", i+1, 0, 0);
						break;
					default :
						printf("Invalid\n" );
				}
			}
			
			else{
				if(direc == 'N'){
					//printf("N\n");
					for(int b=y+1; b<N; b++){
						for(int a=0; a<N; a++){
								matrice[a][b]++;
						}
					}
				}
				
				else if(direc == 'E'){
					//printf("E\n");
					for(int a=x+1; a<N; a++){
						for(int b=0; b<N; b++){
								matrice[a][b]++;
						}
					}
				}
				
				else if(direc == 'S'){
					//printf("S\n");
					for(int b=y-1; b>=0; b--){
						for(int a=0; a<N; a++){
								matrice[a][b]++;
						}
					}
				}
				else{
					//printf("W\n");
					for(int a=x-1; a>=0; a--){
						for(int b=0; b<N; b++){
								matrice[a][b]++;
						}
					}
				}
				
				
					
			}

		}
		
		int max=0;
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(matrice[i][j]>max){
					x=i;
					y=j;
					max = matrice[i][j];
				}
			}
		}
		
		if(nb_pers!=1)
			printf("Case %d: %d %d\n", i+1, x, y);
		}
	return 0;
}