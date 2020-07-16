#include<stdio.h>
#include<string.h>
int main(void){
	int N,i,x,j;
	scanf("%d",&N);
char str[N][10],str1[N][10];
	for(i=0;i<N;i++){
		for(j=0;j<10;j++){
		
		str1[i][j]=0;
		str[i][j]=0;
	}
	}
	for(i=0;i<N;i++){
		scanf("%d",&x);
	scanf("%s",str[i]);
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<strlen(str[i]);j++){
			if(str[i][j]=='E'){
				str1[i][j]='S';
			}
			else{
				str1[i][j]='E';
			}
		}
	}
	
	for(i=0;i<N;i++){
		
			printf("Case #%d: %s\n",i+1,str1[i]);
		
	}
	
	
	
}