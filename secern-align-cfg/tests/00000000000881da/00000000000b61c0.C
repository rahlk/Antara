#include <stdio.h>

int main(){
	int t,i,n,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n);
		char arr[n+1];
		scanf("%s",arr);
		printf("Case #%d: ",i+1);
		for(j=0;arr[j]!='\0';j++){
			if(arr[j]=='E'){
				printf("S");
			}
			else{
				printf("E");
			}
		}
		printf("\n");
	}
}