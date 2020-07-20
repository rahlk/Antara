#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d ",&t);
	char d;
	int count=0;
	for(int i=0;i<t;i++){
		count=0;
		char num1[101]={0};
		char num2[101]={0};
		do{
			scanf("%c",&d);
			// printf("%c",d);
			// fflush(stdout);
			if(d=='4'){
				num1[count]='3';
				num2[count++]='1';
			}
			else if(d!='4' && d!='\n'){
				num1[count]=d;
				num2[count++]='0';
			}
		}while(d!='\n');
		num1[count]='\0';
		num2[count]='\0';
		printf("Case #%d: %s %s\n",i+1,num1,num2);
	}
	return 0;
}
