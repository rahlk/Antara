#include<stdio.h>
#include<string.h>
int main(){
	int t;
	char way[100010];
	scanf("%d",&t);
	int i,x;
	int n;
	for(x=0;x<t;x++){
		scanf("%d",&n);
		scanf("%s",way);
		if(x>0){
			printf("\n");
		}
		printf("Case #%d: ",x+1);
		for(i=0;i<strlen(way);i++){
			if(way[i] == 'S'){
				printf("E");
			}
			else{
				printf("S");
			}
		}
	}
	return 0;
}