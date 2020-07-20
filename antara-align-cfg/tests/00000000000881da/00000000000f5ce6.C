#include <stdio.h>
#include <string.h>


#define N_MAX 50000

typedef struct{
	int N;
	char path[2*N_MAX-2];
}percorso;

int main(){
	//Raccolta input
	int T;
	scanf("%d", &T);
	percorso cases[T];
	for(int i = 0; i < T; i++){
		scanf("%d", &cases[i].N);
		scanf("%s", cases[i].path);
	}
	char soluzioni[T][N_MAX];


	//Elaborazione
	for(int prova = 0; prova < T; prova++){
		int curr_N = cases[prova].N;
		char mappa[curr_N][curr_N];
		for(int k = 0; k < curr_N; k++){
			for(int j = 0; j < curr_N; j++){
				mappa[k][j] = '-';
			}	
		}	
		
		//scrittura percorso avversario
		int x = 0;
		int y = 0;
		for(int mossa = 0; mossa < strlen(cases[prova].path); mossa++){
			if(cases[prova].path[mossa] == 'E'){
				mappa[x][y] = 'E';
				x++;
			}else if(cases[prova].path[mossa] == 'S'){
				mappa[x][y] = 'S';
				y++;
			}
		}




		//analisi del percorso
		

		if(mappa[0][0] == 'E'  &&  mappa[curr_N - 1][curr_N - 2] == 'S'){
			for(y = 0; y < curr_N-1; y++){
				soluzioni[prova][y] = 'S';
			}
			for(x = 0; x < curr_N-1; x++){
				soluzioni[prova][x+y] = 'E';
			}
		}else if(mappa[0][0] == 'S'  &&  mappa[curr_N - 2][curr_N - 1] == 'E'){
			for(x = 0; x < curr_N-1; x++){
				soluzioni[prova][x] = 'E';
			}
			for(y = 0; y < curr_N-1; y++){
				soluzioni[prova][x+y] = 'S';
			}
		}else if(mappa[0][0] == 'S'  &&  mappa[curr_N - 1][curr_N - 2] == 'S'){
			int x_passaggio = 0;
			int y_passaggio = 0;
			for(y = 1; y < curr_N-1; y++){
				for(x = 1; x < curr_N-1; x++){
					if(mappa[x][y] == 'E'  &&  mappa[x][y-1] == '-'){
						x_passaggio = x;
						y_passaggio = y;
						break;
					}
				}
				if(mappa[x][y] == 'E'  &&  mappa[x][y-1] == '-')
					break;
			}
			for(x = 0; x < x_passaggio; x++){
				soluzioni[prova][x] = 'E';
			}
			for(y = 0; y < curr_N-1; y++){
				soluzioni[prova][x+y] = 'S';
			}
			for(x; x < curr_N-1; x++){
				soluzioni[prova][x+y] = 'E';
			}
		}else if(mappa[0][0] == 'E'  &&  mappa[curr_N - 2][curr_N - 1] == 'E'){
			int x_passaggio = 0;
			int y_passaggio = 0;
			for(x = 1; x < curr_N-1; x++){
				for(y = 1; y < curr_N-1; y++){
					if(mappa[x][y] == 'S'  &&  mappa[x-1][y] == '-'){
						x_passaggio = x;
						y_passaggio = y;
						break;
					}
				}
				if(mappa[x][y] == 'S'  &&  mappa[x-1][y] == '-')
					break;
			}
			for(y = 0; y < y_passaggio; y++){
				soluzioni[prova][y] = 'S';
			}
			for(x = 0; x < curr_N-1; x++){
				soluzioni[prova][x+y] = 'E';
			}
			for(y; y < curr_N-1; y++){
				soluzioni[prova][x+y] = 'S';
			}
		}


	}
	for(int n = 0; n < T; n++){
		printf("Case #%d: %s\n", n+1, soluzioni[n]);
	}
}
