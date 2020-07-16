#include <stdio.h>
#include<string.h>
int n;
char input[101],out[101];
int main(){
	fscanf(stdin,"%d",&n);
	for(int a=0;a<n;a++){
		fscanf(stdin,"%s",input);
		int size=strlen(input);
		fprintf(stdout,"Case #%d: ",a+1);
		for(int b=0;b<size;b++){
			if(input[b]=='4'){
				fprintf(stdout,"2");
				out[b]='2';
			}else{
				fprintf(stdout,"%c",input[b]);
				out[b]='0';
			}
			
		}
		fprintf(stdout," ");
		int c;
		for(c=0;out[c]=='0';c++);
		for(;c<size;c++){
			fprintf(stdout,"%c",out[c]);
		}
		fprintf(stdout,"\n");
		
	}
	return 0;
}