#include <stdio.h>
#define max(x,y) (x>y)?x:y

int main(){
	int t, x;
	scanf("%d", &t);
	for(x = 1; x <= t; x++){
		int r , c, i, j;
		scanf("%d%d", &r, &c);
		printf("Case #%d: ", x);
		if (max(r,c) <= 3 || (r==2&&c==4) || (c==2&&r==4)){
			printf("IMPOSSIBLE\n");
		}
		else {
			printf("POSSIBLE\n");
			if (r%2 == 0){
				for (i = 0; i < r/2;i++){
					for(j = 0; j < 2*c; j++){
						if (j%2==0){
							printf("%d %d\n", 2*i+1+j%2, (c-1+j/2)%c+1);
						}
						else{
							printf("%d %d\n", 2*i+1+j%2, (c-3+j/2)%c+1);
						}
					}
				}
			}
			else{
				for (i = 0; i < r/2-1;i++){
					for(j = 0; j < 2*c; j++){
						if (j%2==0){
							printf("%d %d\n", 2*i+1+j%2, (c-1+j/2)%c+1);
						}
						else{
							printf("%d %d\n", 2*i+1+j%2, (c-3+j/2)%c+1);
						}
					}
				}
				for (j = 0; j < 3*c; j++){
					printf("%d %d\n", 2*i+1+(j+1)%3, (((j%3)*2+j/3)%c+1));
				}
			}
		}
	}
}