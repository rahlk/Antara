#include <stdio.h>
#include<string.h>
int n;
int monnezza;
char input[50000];
int main(){
	fscanf(stdin,"%d",&n);
	for(int a=0;a<n;a++){
		fscanf(stdin,"%d %s",&monnezza,input);
		int size=strlen(input);
		for(int b=0;b<size;b++){
			if(input[b]=='S') fprintf(stdout,"E"); else fprintf(stdout,"S");
		}
		printf("\n");
	}
	return 0;
}