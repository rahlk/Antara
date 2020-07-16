#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t,n;
	char *str;
	int i,k;
	
	scanf(" %d",&t);
	for(i=1;i<=t;++i){
		scanf(" %d",&n);
		str = (char *)malloc(sizeof(char)*n*2);
		scanf(" %s",str);
		printf("Case #%d: ",i);
		for(k=0;str[k]!='\0';++k){
			if(str[k]=='S')
				printf("E");
			else
				printf("S");
		}
		printf("\n");
		free(str);
	}
	return(0);
}