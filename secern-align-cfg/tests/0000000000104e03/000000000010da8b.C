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
			if (c < 3){
				j = c;
				c = r;
				r = j;
				flag = 1;
			}
			if (r%2 == 0){
				for (i = 0; i < r/2;i++){
					for(j = 0; j < 2*c; j++){
						if (j%2==0){
							if (flag==0)
								printf("%d %d\n", 2*i+1+j%2, (c-1+j/2)%c+1);
							else
								printf("%d %d\n", (c-1+j/2)%c+1, 2*i+1+j%2);
						}
						else{
							if (flag==0)
								printf("%d %d\n", 2*i+1+j%2, (c-3+j/2)%c+1);
							else
								printf("%d %d\n", (c-3+j/2)%c+1, 2*i+1+j%2);
						}
					}
				}
			}
			else{
				for (i = 0; i < r/2-1;i++){
					for(j = 0; j < 2*c; j++){
						if (j%2==0){
							if (flag==0)
								printf("%d %d\n", 2*i+1+j%2, (c-1+j/2)%c+1);
							else
								printf("%d %d\n", (c-1+j/2)%c+1, 2*i+1+j%2);
						}
						else{
							if (flag==0)
								printf("%d %d\n", 2*i+1+j%2, (c-3+j/2)%c+1);
							else
								printf("%d %d\n", (c-3+j/2)%c+1, 2*i+1+j%2);
						}
					}
				}
				for (j = 0; j < 3*c; j++){
					if (flag==0)
						printf("%d %d\n", 2*i+3-j%3, (((j%3)*2+j/3)%c+1));
					else
						printf("%d %d\n", (((j%3)*2+j/3)%c+1), 2*i+3-j%3);
				}
			}
		}
	}
}