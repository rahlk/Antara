#include<stdio.h>
int main(){
	int T,N,i,P,j;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
		j=0;
		scanf("%d",&N);
		P=(2*N)-2;
		char path[P];
		scanf("%s",&path);
		while(path[j]!='\0'){
			if(path[j]=='E'){
				path[j]='S';
			}
			else{
				path[j]='E';
			}
			j++;
		}
		printf("Case #%d: %s",i,path);
	}	
	return 0;
}