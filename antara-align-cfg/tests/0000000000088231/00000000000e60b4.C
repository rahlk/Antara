#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int t,i,j,k;
	char *n,*m;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		n=(char*)malloc(sizeof(char)*((int)pow(10,100)));
		m=(char*)malloc(sizeof(char)*((int)pow(10,100)));
		scanf("%s",n);
		for(j=0,k=0;j<strlen(n);j++){
			if(n[j]=='4'){
				m[k]='1';
				n[j]='3';
				k++;
			}
			else if(k>0){
				m[k]='0';
				k++;
			}
			
		}
		m[k]='\0';
		printf("Case #%d: %s %s\n",i+1,n,m);
		free(n);
		free(m);
	}
	return(0);
}

