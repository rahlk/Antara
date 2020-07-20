#include<stdio.h>
int main(){
	int n,i,row,col,t,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++){
		scanf("%d",&n);
		int arr[n][n];
		char c;
		char s[(2*n)-1];
		scanf("%s",s);

		row=0,col=0;
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='E'){
				col+=1;
				arr[row][col]=-1;
			}
			else if(s[i]=='S'){
				row+=1;
				arr[row][col]=-1;
			}
		}


		printf("Case #%d: ",k);
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='E')
				c='S';
			else if(s[i]=='S')
				c='E';
			printf("%c",c);

		}
		printf("\n");
	}
}