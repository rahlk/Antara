#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int  a, i, j, k, P, Q, x, y, xs[100000], ys[100000], maxx, maxy, posx, posy;
	char D;


	scanf("%d", &a);
	for( i = 0; i < a; i++ ){
		scanf("%d", &P);
		scanf("%d", &Q);
		Q++;
		for (j=0; j < Q; j++){
			xs[j]=0;
			ys[j]=0;
		}

		for(j =0; j < P; j++){
			scanf("%d", &x);
			scanf("%d", &y);
			scanf("%c", &D);
			scanf("%c", &D);
			if( 'N' == D){
				for(k = y + 1; k < Q; k++){
					ys[k]=ys[k]+1;
				}
			}
			if( 'S' == D){
				for(k = y -1; k >=0; k--){
					ys[k]=ys[k]+1;
				}	
			}
			if( 'W' == D){
				for(k = x - 1; k >= 0; k--){
					xs[k]=xs[k]+1;
				}
			}
			if( 'E' == D){
				for(k = x + 1; k < Q; k++){
					xs[k]=xs[k]+1;
				}	
			}
		}
		maxy = 0;
		maxx = 0;
		posx = 0;
		posy = 0;
		for( j =0; j < Q; j++){
			if(ys[j] > maxy){
				maxy = ys[j];
				posy = j;
			}
			if(xs[j] > maxx){
				maxx = xs[j];
				posx = j;
			}
		}
		printf("Case #%d: %d %d\n", i+1, posx, posy);
	}

	return 0;
}