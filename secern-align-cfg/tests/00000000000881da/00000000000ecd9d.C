#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void process (char *str,int len,int n){
	int i;
	for(i=0;i<len;i++){
		if(str[i]=='E'){
			printf("S");
		}
		else{
			printf("E");
		}
	}
	printf("\n");
}
int main(){
	int t,r=1,n;
	char *str;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		str=(char *)malloc((2*n-2)*sizeof(char));
		scanf("%s",str);
		printf("case #%d: ",r);
		process(str,2*n-2,n);
		r++;
	}
}