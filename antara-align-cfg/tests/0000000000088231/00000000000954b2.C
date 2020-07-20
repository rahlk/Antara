#include<stdio.h>
#include<string.h>
int main(){
	int t;
	char A[110];
	char B[110];
	char input[110];
	scanf("%d",&t);
	int x,i;
	for(x=0;x<t;x++){
		scanf("%s",input);
		strcpy(A,"");
		strcpy(B,"");
		for(i=0;i<strlen(input);i++){
			if(input[i]=='4'){
				A[i] = '2';
				B[i] = '2';
			}
			else{
				A[i] = input[i];
				B[i] = '0';
			}
		}
		if(x>0){
			printf("\n");
		}
		printf("Case #%d: ",x+1);
		for(i=0;i<strlen(input);i++){
			printf("%c",A[i]);
		}
		i=0;
		while((i<strlen(input))&&(B[i]=='0')){
			i+=1;
		}
		printf(" ");
		while(i<strlen(input)){
			printf("%c",B[i]);
			i+=1;
		}
	}
	return 0;
}