#include <stdio.h>

int main(void){
	int t;
	int n;
	scanf("%d ",&t);
	for(int j=1;j<=t;j++){
		char dir[100000];
		scanf("%d ",&n);
		scanf("%s",dir);
		n=(n-1)*2;
		for(int i=0;i<n;i++){
			if(dir[i]=='S') dir[i]='E';
			else dir[i]='S';
		}
		printf("Case #%d: %s\n",j,dir);
	}
	return 0;
}