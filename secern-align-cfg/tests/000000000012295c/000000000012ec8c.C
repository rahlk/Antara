#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

		int numTestCase;
		scanf("%d", &numTestCase);


		for(int i = 0; i < numTestCase; i++) {

			int numPeople;
			int Q = 0;
			scanf("%d %d", &numPeople, &Q);

			int arr_x[Q+1];
			memset(arr_x, 0, sizeof(int) * (Q+1);
			int index_x = 0;
			int arr_y[Q+1];
			memset(arr_y, 0, sizeof(int) * (Q+1));
			int index_y = 0;


 			for(int j = 0; j < numPeople; j++) {

				int x;
				int y;
				char dir;
				scanf("%d %d %c", &x, &y, &dir);

                if(dir == 'N'){
                    for(int k = y + 1; k < Q+1; k++) {
						arr_y[k]++;
					}
                }
                else if(dir == 'S'){
                    for(int k = 0; k < y; k++) {
						arr_y[k]++;
					}
                }
                else if(dir == 'E'){
                    for(int k = x + 1; k < Q+1; k++) {
						arr_x[k]++;
					}
                }
                else {
                    for(int k = 0; k < x; k++) {
						arr_x[k]++;
					}
                }

			}
            int x_max = arr_x[0];
            int y_max = arr_y[0];

 			for(int z = 1; z < Q+1; z++) {
 				if(arr_x[z] > x_max){
                    x_max = arr_x[z];
                    index_x = z;
 				}

 			}

 			for(int z = 1; z < Q+1; z++) {
 				if(arr_y[z] > y_max){
                    y_max = arr_y[z];
                    index_y = z;
 				}


 			}

			printf("Case #%d: %d %d\n" , i+1, index_x, index_y);
		}




    return 0;
}

