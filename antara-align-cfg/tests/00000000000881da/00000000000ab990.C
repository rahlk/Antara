#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t;
	int x=0;
	scanf("%d",&t);
	while(x!=t){
		x++;
		int d;
		scanf("%d",&d);
		char str[1000];
		scanf("%s",str);
		int n= strlen(str);
		printf("Case #%d: ", x);
		for(int i=0;i<n;i++){
			
			if(str[i]=='S'){
				printf("E");
			}
			else{
				printf("S");
			}
		}
		printf("\n");	
	}
	
	return 0;

}
