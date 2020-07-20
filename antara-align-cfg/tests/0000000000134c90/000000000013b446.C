#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b){
	if(a>b)return a;
	else return b;
}
int winner(char str1[],char str2[]){
	int win=0;
	int l1=strlen(str1);
	int l2=strlen(str2);
	for(int i=0;i<max(l1,l2);i++){
		if(str1[i%l1]==str2[i%l2]) continue;
		if(str1[i%l1]=='S'){
			if(str2[i%l2]=='P'){
				win=1;
				break;
			}
			if(str2[i%l2]=='R'){
				win=2;
				break;
			}
		}
		if(str1[i%l1]=='P'){
			if(str2[i%l2]=='R'){
				win=1;
				break;
			}
			if(str2[i%l2]=='S'){
				win=2;
				break;
			}
		}
		if(str1[i%l1]=='R'){
			if(str2[i%l2]=='S'){
				win=1;
				break;
			}
			if(str2[i%l2]=='P'){
				win=2;
				break;
			}
		}
	}
	return win;
}

int issame(char str1[],char str2[]){
	int same=1;
	int l1=strlen(str1);
	int l2=strlen(str2);
	for(int i=0;i<max(l1,l2);i++){
		if(str1[i%l1]==str2[i%l2]) continue;
		else {
			same=0;break;
		}
	}
	return same;
}
void better(char str[]){
	if(str[0]=='S'){
		printf("R\n");
	}
		if(str[0]=='P'){
		printf("S\n");
	}
		if(str[0]=='R'){
		printf("P\n");
	}
}
int main(int argc, char const *argv[])
{
	int t;
	int s=505;
	int to;
	scanf("%d",&t);
	to=t;
	while(t){
		t--;
		printf("Case #%d: ",to-t);
		int a;
		int maxlen=0;
		scanf("%d",&a);
		char str[a][505];
		for(int i=0;i<a;i++){
			scanf("%s",str[i]);
			// getline(&str[i],&s,stdin);
			if(strlen(str[i]) > maxlen) maxlen=strlen(str[i]);
		}
		int flag=1;
		int curr=0;
		for(int i=1;i<a;i++){
			int res = winner(str[curr],str[i]);
			if(res==2) curr=i;
		}
		for(int i=0;i<a;i++){
			if(i==curr)continue;
			int res= winner(str[curr],str[i]);
			if(res!=1){
				flag=0; break;
			}
		}
		if(flag==0){
			for(int i=1;i<a;i++){
				if(!issame(str[0],str[i])){
					printf("IMPOSSIBLE\n");
					flag=2;
					break;
				}
			}
			if(flag==0){
				better(str[0]);
			}
		}
		if(flag==1){
			better(str[curr]);
		}
	}
	return 0;
}