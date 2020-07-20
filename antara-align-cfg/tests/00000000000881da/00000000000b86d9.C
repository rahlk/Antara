#include<stdio.h>

char s[999999];

int main(){
	int t,num,i;
	scanf("%d",&t);
	for(num=0;num<t;num++){
		int n;
		for(i=0;s[i]!=0;i++)s[i]=0;
		scanf("%d%s",&n,s);
		printf("Case #%d: ",num+1);
		for(i=0;s[i]!=0;i++){
			if(s[i]=='E')printf("S");
			if(s[i]=='S')printf("E");
		}
		puts("");
	}
	return 0;
}