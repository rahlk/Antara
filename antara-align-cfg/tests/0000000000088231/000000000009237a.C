#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int T,i,j=1,c;
	scanf("%d",&T);
	while(j<=T){
	char N[100],M[100]={};
		scanf("%s",N);
		printf("Case #%d: ",j++);
		for(i=0;i<strlen(N);i++){
			if(N[i]=='4'){
				N[i]-=1;
				M[i]=2;
			}else{
				M[i]=1;
			}
			printf("%c",N[i]);
		}
		printf(" ");
		c=0;
		for(i=0;i<strlen(M);i++){
			if(c==1) printf("%d",M[i]-1);
			else if(M[i]-1!=0) {
				c++;
				printf("%d",M[i]-1);
			}
		}
		printf("\n");
	}
	return 0;
}
