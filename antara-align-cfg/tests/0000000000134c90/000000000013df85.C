#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char op[255][510];
int main(){
	int a;
	int t;
	int i=0;
	while(t--){
		scanf ("%d",&t);
		scanf("%d",&a);
		for (i=1;i<a;i++){
		//fgets(op, 510, stdin); 
				scanf("%s",op[i-1]);
				
				}
				
		//for (i=)
		char str[501];
		char sol[501];
		for(i=0;i<501;i++){
			str[i]=0;
			sol[i]=0;
			
			}
		int j;
		int k ;
	
		for (i=0;i<2;i++){
			k=strlen(op[i]);
			for (j=0;j<k;j++){
				strcpy(str,op[i]);
				
				if (str[i]=='R') {sol[i]='P';}
				else if (str[i]=='P') {sol[i]='S';}
				else if (str[i]=='S') {sol[i]='R';}
				
				}
				
			
			}
			
			
		
		for(i=0;i<strlen(sol);i++){printf("%d",sol[i]);}
		
		}
		
	
	
	}
