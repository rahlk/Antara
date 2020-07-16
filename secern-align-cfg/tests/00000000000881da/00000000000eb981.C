#include<stdio.h>
#include<string.h>
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,x,i,j,temp,p=0;
		scanf("%lld",&n);
		x=2*n-2;
		char str[x],s1[200001]={0};
		scanf("%s",str);
		if(str[0]=='E'){
		for(i=0;i<strlen(str);i++){
			if(str[i]=='S'){
				s1[p]=str[i];
				p++;
			}
		}
		for(i=0;i<strlen(str);i++){
			if(str[i]=='E'){
				s1[p]=str[i];
				p++;
			}
		}
	}
	if(str[0]=='S'){
		for(i=0;i<strlen(str);i++){
			if(str[i]=='E'){
				s1[p]=str[i];
				p++;
			}
		}
		for(i=0;i<strlen(str);i++){
			if(str[i]=='S'){
				s1[p]=str[i];
				p++;
			}
		}
	}
		s1[p]='\0';
		printf("%s\n",s1);
	}
}