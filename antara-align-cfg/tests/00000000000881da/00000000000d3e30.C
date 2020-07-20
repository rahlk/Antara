#include <stdio.h>

int main(){
	int numberOfPath;
	int ct=0;
	int size=0;
	char* path;
	int k=0;
	scanf("%d",&numberOfPath);
	for(ct=0;ct<numberOfPath;ct++){
		scanf("%d",&size);
		scanf("%s",path);
		k=0;
		while(path[k]!='\0'){
			if(path[k]=='E'){
				path[k]='S';
			}else{
				path[k]='E';
			}
			k++;
		}
		printf("Case #%d: %s",ct+1,path);
	}
}
