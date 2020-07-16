#include<stdio.h>
#include<string.h>
int main(){
	int t,n,c=0,i,j;
	char s;
	scanf("%d",&t);
	while(t){
		c=c+1;
		scanf("%d",&n);
		printf("Case #%d: ",c);
		for(j=0;j<(n*2)-2;j++){
			scanf("%c",&s);
			if(s=='S'){
				printf("E");
			}
			else if(s=='E'){
				printf("S");
		}
	}
}
	t=t-1;
	printf("\n");
}
