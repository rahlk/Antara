#include<stdio.h>

int main(void){
	int t,count=1;
	scanf("%d",&t);
	while(t--){
		long long int N,i,length;
		scanf("%lld",&N);
		length = 2*N-2;
		char lydia[length],me[length];
		scanf("%s",lydia);
		for(i=0;i<length;i++){
			if(lydia[i]=='S') me[i]='E';
			else me[i]='S';
		}
		me[i]='\0';
		printf("Case #%d: %s\n",count,me);
		count++;
	}
	return 0;
}