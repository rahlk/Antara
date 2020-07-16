#include <stdio.h>
#include <string.h>
#include <limits.h>
char s[100010];
void solve(int t){
	int n;
	scanf("%d",&n);
	scanf("%s",s);
	int l = strlen(s);
	int i,j;
	printf("Case #%d: ",t);	
	for(i = 0;i < l;i++){
		if(s[i] == 'S'){
			printf("E");
		}
		else{
			printf("S");
		}
	}
	printf("\n");
}

int main(){
	int T,t;
	scanf("%d",&T);
	for(t = 1; t <= T;t++){
		solve(t);
	}
}