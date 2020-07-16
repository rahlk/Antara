#include <stdio.h>
#define max(x,y) ((x>y)?x:y)

int main(){
	int t, x;
	scanf("%d", &t);
	for(x = 1; x <= t; x++){
		int r , c, i, j, flag = 0;
		scanf("%d%d", &r, &c);
		printf("Case #%d: ", x);
		if (max(r,c) <= 3 || (r==2&&c==4) || (c==2&&r==4)){
			printf("IMPOSSIBLE\n");
		}
		else {
			printf("POSSIBLE\n");
			for (i = 0;i<r*c;i++){
				printf("%d %d\n",(i%r)+1, (2*i+i/r)%c+1);
			}
		}
	}
}