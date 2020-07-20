#include <stdio.h>
#include<string.h>

int main() {
	int test,Case;
	long int N,path_length,i;
	char path[50000];
	
	scanf("%d",&test);
	Case = 1;
	while(Case<=test){
	    scanf("%ld",&N);
	    scanf("%s",path);
	    path_length = strlen(path);
	    printf("Case #%d: ",Case);
	    for(i=0;i<path_length;i++){
	        if(path[i]=='E')
	            printf("S");
	        else
	            printf("E");
	    }
	    printf("\n");
	    Case++;
	}
	return 0;
}