#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int t, r, c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &r, &c);
		bool meth1 = false, meth2 = false; // two methods: meth1 for even columns, and meth2 for even rows
		if (!(meth1 = r >= 5 && c % 2 == 0) && !(meth2 = r % 2 == 0 && c >= 5)) { // grid is neither tall nor wide
			printf("Case #%d: IMPOSSIBLE\n", i+1);
			continue;
		}
		// square arrays with even dimensions > 5 could use either method
		printf("Case #%d: POSSIBLE\n", i+1);
		if (meth1) {
			for (int i = 0; i < c; i += 2) { // separate into 2-column blocks
				int x = i, y = 0; // coordinates of next cell to print
				for (int j = 0; j < r*2; j++) { // fill up every cell in the block according to method 1
									  // start at top left for method 1
					printf("%d %d\n", y+1, x+1);
					
					// METHOD 1:
					if (j % 2 == 0) { // step A
						x++; // move 1 right
						y = (y+3) % r; // move 3 down
					}
					else { // step B
						y = (y-2) % r; // move 2 up
						y = (y < 0) ? y + r : y % r;
						x--; // move 1 left
					}
				}
			}	
		} else {
			for (int i = 0; i < r; i += 2) { // separate into 2-row blocks
				int x = 0, y = i; // coordinates of next cell to print
				for (int j = 0; j < c*2; j++) { // fill up every cell in the block according to method 2
									  // start at top left for method 1
					printf("%d %d\n", y+1, x+1);
					
					// METHOD 2:
					if (j % 2 == 0) { // step A
						x = (x+3) % c; // move 3 right
						y++; // move 1 down
					}
					else { // step B
						y--; // move 1 up
						x = (x-2); // move 2 left
						x = (x < 0) ? x + c : x % c; // trying to % by c, but want result to be between 0 and c-1
					}
				}
			}
		}
	}
	return 0;
}
