#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int T,i,j=1,k;
	char N[50000];
	scanf("%d",&T);
	while(j<=T){
		scanf("%d",&k);
		k=k*2-2;
		scanf("%s",N);
		printf("Case #%d: ",j++);
		for(i=0;i<k;i++){
			if(N[i]=='E') printf("S");
			else printf("E");
		}
		printf("\n");
	}
	return 0;
}
