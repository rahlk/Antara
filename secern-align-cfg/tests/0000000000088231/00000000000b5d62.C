#include<stdio.h>

int main(){
	int t,num,i;
	int f=0;
	char ans[100][2][101]={0};
	scanf("%d",&t);
	for(num=0;num<t;num++){
		char s[101];
		scanf("%s",s);
		int g=0;
		while(s[g]!=0)g++;
		for(i=g-1;i>=0;i--){
			if(s[i]!='4')ans[num][0][i]=s[i];
			else ans[num][0][i]=s[i]-1;
		}
		for(i=g-1;i>=0;i--){
			ans[num][1][i]=s[i]-ans[num][0][i];
		}
		for(i=0;i<g;i++)ans[num][1][i]+='0';
		for(i=0;i<g;i++){
			if(ans[num][1][i]=='0'){
				ans[num][1][i]=0;
			}else{
				f=i;
				break;
			}
		}
//		for(i=0;i<g-f;i++)ans[num][1][i]=ans[num][1][i+f];
//		for(i=f+1;i<g;i++)ans[num][1][i]=0;
	}
	for(i=0;i<t;i++){
		printf("Case #%d: %s %s\n",i+1,ans[i][0],&ans[i][1][f]);
	}
	return 0;
}