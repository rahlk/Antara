#include <stdio.h>

int t;
char num[105],temp[105];

void solve(int t){
	scanf("%s",num);
	int l=0,first=-1;
	while(num[l]!=0){
		temp[l] = '0';
		if(num[l] == '4'){
			num[l] = '3';
			temp[l] = '1';
			if(first == -1){
				first = l;
			}
		}
		l++;
	}
	temp[l] = 0; 
	printf("Case #%d: %s %s\n",t,num,temp+first);
}

int main(int argc, char const *argv[])
{
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		solve(i+1);
	}
	return 0;
}