#include<stdio.h>

int main(){
	int t,num,i;
	scanf("%d",&t);
	for(num=0;num<t;num++){
		int n;
		char s[10000];
		scanf("%d%s",&n,s);
		printf("Case #%d: ",num+1);
		/*int tate[1000]={0};
		int yoko[1000]={0};
		int x=0,y=0;
		for(i=0;s[i]!=0;i++){
			if(s[i]=='E'){
				yoko[y]=1;
				x++;
			}
			if(s[i]=='S'){
				tate[x]=1;
				y++;
			}
		}
		int f=0;//0:tate,1:yoko
		if(s[0]=='S')f=1;
		x=0,y=0;
		for(i=0;i<2*n;i++){
			if(f==0){
				y++;
				printf("S");
				if(yoko[y+1]*/
		for(i=0;s[i]!=0;i++){
			if(s[i]=='E')printf("S");
			if(s[i]=='S')printf("E");
		}
		puts("");
	}
	return 0;
}