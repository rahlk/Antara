#include<stdio.h>
#include<string.h>


int main(){

	int t;
	scanf("%d",&t);
	int x=1;
	while(t--){
		char N[101];
		scanf(" %s",N);
		int l=strlen(N);

		char a[100];
		char b[100];
		int j=0,k=0;
		int flag=0;
		for(int i=0;i<l;i++){
			if(N[i]!='4'){
				a[j]=N[i];
				j++;
				if(flag)b[k++]='0';
				
			}

			else{
				flag=1;
				a[j]='2';
				b[k]='2';
				j++;
				k++;
			}
		}

		a[j]=b[k]='\0';
		printf("Case #%d:",x);
		x++;
		printf(" %s\t",a);
		printf(" %s\n",b);


	}

	return 0;
}