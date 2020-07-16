#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void calculateResult(char n[], int c){
	int i,len = strlen(n);
	for(i=0;i<len;i++){
		n[i]=(n[i]=='E'?'S':'E');
	}
	printf("Case #%d: %s\n",c,n);
	
	return;
}

int main(){
	int t,c=1,n;
	char str[100002];
	scanf("%d",&t);
	while(t--){
		scanf("%d", &n);
		scanf("%s", str);
		calculateResult(str,c++);
	}
	return 0;
}