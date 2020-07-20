#include<stdio.h>
#include<string.h>

int main(void){
	
	int t,cases=1;
	scanf("%d",&t);
	while(t--){
		char N[110];
		int length,i,j,x=0;
		scanf("%s",N);
		length  = strlen(N);
		char one[length];
		char two[length]; 
		char three[length],sub[110];
		for(i=0,j=0;i<length && j<length;i++){
			if(N[i]=='4'){
				x=1;
				one[j]='2';
				two[i]='2';
				j++;
			}
			else{
				if(x==1){
					one[j]='0';
					j++;
				}
				two[i]=N[i];
			}
		}
		one[j]='\0';
		two[i]='\0';
		printf("Case #%d: %s %s\n",cases,one,two);
		cases++;
	}
	return 0;
}