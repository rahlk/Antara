#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int x;
	while(x!=t){
		x++;
		char a[1000],b[1000];
		char str[1000];
		scanf("%s",str);
		int n=strlen(str);
		for(int i=0;i<n;i++){
			if(str[i]=='4'){
				a[i]='3';
				b[i]='1';
			}
			else{
				a[i]=str[i];
				b[i]='0';
			}
		}
		printf("Case #%d: ", x);
		for(int i=0;i<n;i++){
			printf("%c",a[i]);
		} 
		printf(" ");
		int flag=0;
		for(int i=0;i<n;i++){
			if(flag!=0 || b[i]!='0'){
				printf("%c",b[i]);
				flag=1;
			}
			// if(flag==0&&b[i]=='0')con
		}
		printf("\n");
	}
	return 0;
}