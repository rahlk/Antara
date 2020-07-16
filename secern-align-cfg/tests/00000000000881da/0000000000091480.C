#include<stdio.h>
#include<string.h>
int main(){
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		int N;
		scanf("%d",&N);
		char in[200000];
		scanf("%s",in);
		printf("Case #%d: ",i+1);
		int len=strlen(in);
		for(int j=0;j<len;j++){
			if(in[j]=='S')printf("E");
			else if(in[j]=='E')printf("S");
		}printf("\n");
	}
}
