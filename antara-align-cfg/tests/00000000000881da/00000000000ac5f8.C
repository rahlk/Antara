#include<stdio.h>
#include<string.h>
int main(){
	int t,n,c=0,i;
	char str[100000];
	scanf("%d",&t);
	while(t){
		c=c+1;
		scanf("%d",&n);
		scanf("%s",str);
		printf("Case #%d: ",c);
		for(i=0;i<strlen(str);i++){
			if(str[i]=='S'){
				printf("E");
			}
			else if(str[i]=='E'){
				printf("S");
			}
		}
		t=t-1;
		printf("\n");
		
	}
}
