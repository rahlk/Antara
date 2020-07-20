#include <stdio.h>

int main(){
	int t,i,n,j;
	char a;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		printf("Case #%d: ",i+1);
		for(j=0;j<n;j++){
			scanf(" %c",&a);
			if(a == 'E'){
				printf("S");
			}
			else{
				printf("E");
			}
		}
		printf("\n");
	}
}