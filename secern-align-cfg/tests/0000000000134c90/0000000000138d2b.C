#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int t;
	char **inp;
	scanf("%d",&t);
	int i,x,j;
	int n;
	int r,p,s;
	int *len;
	char output[510];
	int impossible;
	for(x=0;x<t;x++){
		scanf("%d",&n);
		inp = (char**)malloc(sizeof(char*)*n);
		len = (int*)malloc(sizeof(int*)*n);
		for(i=0;i<n;i++){
			inp[i]=(char*)malloc(sizeof(char)*500);
			scanf("%s",inp[i]);
			len[i] = strlen(inp[i]);
		}
		impossible = 0;
		for(i=0;i<500;i++){
			r=0;
			p=0;
			s=0;
			for(j=0;j<n;j++){
				if(len[j]!=-1){
					switch(inp[j][i%len[j]]){
						case 'R': r=1;
								  break;
						case 'P': p=1;
								  break;
						case 'S': s=1;
								  break;
					}
				}
			}
			if((r==1)&&(p==1)&&(s==1)){
				impossible = 1;
				break;
			}
			else if((r==1)&&(p==1)){
				output[i] = 'P';
			}
			else if((r==1)&&(s==1)){
				output[i] = 'R';
			}
			else if((p==1)&&(s==1)){
				output[i] = 'S';
			}
			else if(p==1){
				output[i] = 'S';
				output[i+1] = '\0';
				break;
			}
			else if(s==1){
				output[i] = 'R';
				output[i+1] = '\0';
				break;
			}
			else if(r==1){
				output[i] = 'P';
				output[i+1] = '\0';
				break;
			}
			for(j=0;j<n;j++){
				if(len[j]!=-1){
					if(output[i]!=inp[j][i%len[j]]){
						if((output[i] == 'S')&&(inp[j][i%len[j]]=='P')){
							len[j] = -1;
						}
						else if((output[i] == 'P')&&(inp[j][i%len[j]]=='R')){
							len[j] = -1;
						}
						else if((output[i] == 'R')&&(inp[j][i%len[j]]=='S')){
							len[j] = -1;
						}
					}
				}
			}
		}
		if(x>0){
			printf("\n");
		}
		if((impossible == 1)||(i==500)){
			printf("Case #%d: IMPOSSIBLE",x+1);
		}
		else{
			printf("Case #%d: %s",x+1,output);
		}
		for(i=0;i<n;i++){
			free(inp[i]);
		}
		free(inp);
		free(len);
	}
	return 0;
}