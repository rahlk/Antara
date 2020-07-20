#include<stdio.h>
#include<string.h>
void main(){
	int t,p=0;
	scanf("%d",&t);
	while(t!=0){
			char str[2000];
			char path[2000];
			long m;
			scanf("%l",&m);
			t--;
			scanf("%s",&str);	
			int i,j;
			int len = 0;
			len = strlen(str);
			for(i=0;i<len;i++){
			   	if(str[i]=='E'){
			   		path[i]='S';
					}
				if(str[i]=='S'){
			   		path[i]='E';
					}	
				}
			p++;		
	
//			 	 printf("Case #%d: %c",p,path[i]);
				printf("Case #%d: %s\n",p,path);
				
				path[0] = '\0';
				
		}
	}


