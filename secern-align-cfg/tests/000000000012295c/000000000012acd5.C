#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int numTestcase;
	scanf("%d", &numTestcase);

	for (int testIdx=0; testIdx<numTestcase; testIdx++){

		int P;
		int Q;
		scanf("%d", &P);
		scanf("%d", &Q);

		int *x_count = (int*) malloc(sizeof(int)* (Q+1));
		int *y_count = (int*) malloc(sizeof(int)* (Q+1));

		memset(x_count, 0, sizeof(int)*(Q+1));
		memset(y_count, 0, sizeof(int)*(Q+1));

		int x = 0;
		int y = 0;
		char D;

        for(int peopleIdx=0; peopleIdx<P; peopleIdx++){

            scanf("%d %d %c", &x, &y, &D);

            if (D=='N'){
                for (int temp=y+1; temp<Q+1 ; temp++){
                    y_count[temp] = y_count[temp]+1;
                }
            }
            else if (D=='S'){
                for (int temp=0; temp<y ; temp++){
                    y_count[temp] = y_count[temp]+1;
                }
            }
            else if (D=='E'){
                for (int temp=x+1; temp<Q+1 ; temp++){
                    x_count[temp] = x_count[temp]+1;
                }
            }
            else if (D=='W'){
                for (int temp=0; temp<x ; temp++){
                    x_count[temp] = x_count[temp]+1;
                }
            }

        }

        int max_x = x_count[0];
        int max_y = y_count[0];
        int max_xidx = 0;
        int max_yidx = 0;

        for (int i=1; i<Q+1; i++)
        {
            if (max_x < x_count[i]){
                max_x = x_count[i];
                max_xidx = i;
            }
        }

        for (int i=1; i<Q+1; i++)
        {
            if (max_y < y_count[i]){
                max_y = y_count[i];
                max_yidx = i;
            }
        }

		printf("Case #%d: %d %d\n", testIdx+1, max_xidx, max_yidx);
	}

	return 0;
}