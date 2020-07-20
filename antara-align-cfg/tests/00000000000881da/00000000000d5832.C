#include<stdio.h>
#include<string.h>
int main(){
	
	int t;
	int n;
	scanf("%d",&t);
	int i=1;
	while(i<=t){
		
		scanf("%d",&n);
		char str[(2*n)-1];
		scanf("%s",str);
		for(int j=0;str[j]!=NULL;j++){
			
			if(str[j]=='S')
				str[j]='E';
			else
				str[j]='S';
		}
		printf("Case #%d: %s\n",i,str);
		i++;
	}
}