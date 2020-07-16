#include<stdio.h>
#include<string.h>
int main(){
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,j,flag=0,k=0;
		char a[100],b[100]="";
		scanf("\n");
		gets(a);
		n = strlen(a);
		for(j=0;j<n;j++){
			if(a[j]=='4'){
				a[j] = '2';
				b[k++] = '2';
				flag = 1;
			}
			else if(flag == 1 && a[j] != '4'){
				b[k++] = '0';
			}
		}
		printf("Case #%d: ",i+1);
		for(j=0;j<strlen(a);j++){
			printf("%c",a[j]);	
		}
		printf(" ");
		for(j=0;j<strlen(b);j++){
			printf("%c",b[j]);	
		}
		printf("\n");
	}
}