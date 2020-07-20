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

			int arr_x[Q];
			memset(arr_x, 0, sizeof(int) * Q);
			int index_x = 0;
			int arr_y[Q];
			memset(arr_y, 0, sizeof(int) * Q);
			int index_y = 0;


 			for(int j = 0; j < numPeople; j++) {

				int x;
				int y;
				char dir;
				scanf("%d %d %c", &x, &y, &dir);

				switch(dir) {
				case 'N':
					for(int k = y + 1; k < Q; k++) {
						arr_y[k]++;
					}
					index_y++;
					break;
				case 'S':
					for(int k = 0; k < y; k++) {
						arr_y[k]++;
					}
					index_y++;
					break;
				case 'E':
					for(int k = x + 1; k < Q; k++) {
						arr_x[k]++;
					}
					index_x++;
					break;
				case 'W':
					for(int k = 0; k < x; k++) {
						arr_x[k]++;
					}
					index_x++;
					break;
				}
			}
 			int x_min = 0;
 			int x_max = 0;
 			int y_min = 0;
 			int y_max = 0;
 			for(int z = 0; z < Q; z++) {
 				x_min = z;
 				if(arr_x[z] == index_x) { break; }

 			}
 			for(int z = Q-1; z >= 0; z--) {
 				x_max = z;
 				if(arr_x[z] == index_x) { break; }
 			}
 			for(int z = 0; z < Q; z++) {
 				y_min = z;
 				if(arr_y[z] == index_y) { break; }

 			}
 			for(int z = Q-1; z >= 0; z--) {
                y_max = z;
 				if(arr_y[z] == index_y) { break; }
 			}
			printf("Case #%d: %d %d\n" , i+1, x_min, y_min);
		}




    return 0;
}