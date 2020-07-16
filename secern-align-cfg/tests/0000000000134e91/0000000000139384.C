#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, x, f;
	scanf("%d%d", &t, &f);
	for (x = 1; x <=t; x++){
		int i, j[5], pos[5][119] = {0}, count[5][5] = {0};
		char c;
		for (i = 0; i < 119; i++){
			printf("%d\n", 5*i+1 );
			fflush(stdout);
			scanf(" %c", &c);
			switch(c){
				case 'A':count[0][0]++;
						 pos[0][i] = 0;
						 break;
				case 'B':count[0][1]++;
						 pos[0][i] = 1;
						 break;
				case 'C':count[0][2]++;
						 pos[0][i] = 2;
						 break;
				case 'D':count[0][3]++;
						 pos[0][i] = 3;
						 break;
				case 'E':count[0][4]++;
						 pos[0][i] = 4;
						 break;
			}
		}
		for (i = 0;i < 5; i++){
			if (count[0][i] != 24){
				j[0] = i;
			}
		}


		for (i = 0; i < 119; i++){
			if (pos[0][i] == j[0]){
				printf("%d\n", 5*i+2 );
				fflush(stdout);
				scanf(" %c", &c);
				switch(c){
					case 'A':count[1][0]++;
							 pos[1][i] = 0;
							 break;
					case 'B':count[1][1]++;
							 pos[1][i] = 1;
							 break;
					case 'C':count[1][2]++;
							 pos[1][i] = 2;
							 break;
					case 'D':count[1][3]++;
							 pos[1][i] = 3;
							 break;
					case 'E':count[1][4]++;
						 	pos[1][i] = 4;
							 break;
				}
			}
		}
		for (i = 0;i < 5; i++){
			if (i != j[0] && count[1][i] != 6){
				j[1] = i;
			}
		}


		for (i = 0; i < 119; i++){
			if (pos[0][i] == j[0] && pos[1][i] == j[1]){
				printf("%d\n", 5*i+3 );
				fflush(stdout);
				scanf(" %c", &c);
				switch(c){
					case 'A':count[2][0]++;
							 pos[2][i] = 0;
							 break;
					case 'B':count[2][1]++;
							 pos[2][i] = 1;
							 break;
					case 'C':count[2][2]++;
							 pos[2][i] = 2;
							 break;
					case 'D':count[2][3]++;
							 pos[2][i] = 3;
							 break;
					case 'E':count[2][4]++;
						 	pos[2][i] = 4;
							 break;
				}
			}
		}
		for (i = 0;i < 5; i++){
			if (i != j[0] && i != j[1] && count[2][i] != 2){
				j[2] = i;
			}
		}

		for (i = 0; i < 119; i++){
			if (pos[0][i] == j[0] && pos[1][i] == j[1] && pos[2][i] == j[2]){
				printf("%d\n", 5*i+4 );
				fflush(stdout);
				scanf(" %c", &c);
				switch(c){
					case 'A':count[3][0]++;
							 pos[3][i] = 0;
							 break;
					case 'B':count[3][1]++;
							 pos[3][i] = 1;
							 break;
					case 'C':count[3][2]++;
							 pos[3][i] = 2;
							 break;
					case 'D':count[3][3]++;
							 pos[3][i] = 3;
							 break;
					case 'E':count[3][4]++;
						 	pos[3][i] = 4;
							 break;
				}
			}
		}
		for (i = 0;i < 5; i++){
			if (i != j[0] && i != j[1] && i != j[2] && count[3][i] != 1){
				j[3] = i;
			}
		}


		for (i = 0; i < 119; i++){
			if (pos[0][i] == j[0] && pos[1][i] == j[1] && pos[2][i] == j[2] && pos[3][i] == j[3]){
				printf("%d\n", 5*i+5 );
				fflush(stdout);
				scanf(" %c", &c);
				switch(c){
					case 'A':count[4][0]++;
							 pos[4][i] = 0;
							 break;
					case 'B':count[4][1]++;
							 pos[4][i] = 1;
							 break;
					case 'C':count[4][2]++;
							 pos[4][i] = 2;
							 break;
					case 'D':count[4][3]++;
							 pos[4][i] = 3;
							 break;
					case 'E':count[4][4]++;
						 	pos[4][i] = 4;
							 break;
				}
			}
		}
		for (i = 0;i < 5; i++){
			if (i != j[0] && i != j[1] && i != j[2] && i != j[3]&& count[4][i] != 1){
				j[4] = i;
			}
		}

		for (i = 0; i<5; i++){
			printf("%c", 'A' + j[i]);
		}
		printf("\n");
		fflush(stdout);

		scanf(" %c", &c);
		if (c == 'N'){
			exit(0);
		}
	}
}