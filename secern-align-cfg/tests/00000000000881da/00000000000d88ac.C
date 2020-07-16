#include <stdio.h>
#include<stdlib.h>
int main(){
	unsigned long numberOfPath;
	unsigned long ct=0;
	unsigned long size=0;
	char* path;
	unsigned long k=0;
	scanf("%lu",&numberOfPath);
	for(ct=0;ct<numberOfPath;ct++){
		scanf("%lu",&size);
        path=malloc(sizeof(char)*size);
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
		printf("Case #%lu: %s\n",ct+1,path);
        free(path);
	}
    return 0;
}
