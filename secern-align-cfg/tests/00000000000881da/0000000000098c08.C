#include<stdio.h>
#include<string.h>
void main(){
	int t,p=0;
	scanf("%d",&t);
	while(t!=0){

			long long int m;
			scanf("%lli",&m);
			t--;
			int size = (2*m-2);
			char str[size];
			char path[size];
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
				printf("Case #%d: %s\n",p,path);

				
		}
	}

