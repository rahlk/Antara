#include <stdio.h>

int main(void) {
	int T, t, n;
	char c;
	scanf("%d", &T);
	//fflush(stdin);//
	//printf("T:%d\n", T);

	for(t=0; t<T; t++){
		scanf("%d",&n);
		//fflush(stdin);//
		//printf("n: %d\n", n);
		n = 2*(n-1);
		//printf("n: %d\n", n);
		printf("Case #%d: ",t+1);
		while(n--){
			
			scanf("%c", &c);
			//printf("n: %d ",n);
			//printf("%c",c=='E'?'S':'E');
			printf("%c",c=='E'?'S':'E');
		}
		//printf("\n");
		puts("");
		//fflush(stdout);//
		//fflush(stdin);
		
	}
//	scanf("%d",&i);
}
