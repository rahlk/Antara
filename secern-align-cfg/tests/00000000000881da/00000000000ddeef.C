#include <stdio.h>

int t,pl;
char path[500000];

void solve(int t){
    scanf("%d %s",&pl,path);
	printf("Case #%d: ",t);
	int l=0;
	while(path[l]!=0){
	    if(path[l]=='E'){
	        printf("%c",'S');
	    }else{
	        printf("%c",'E');
	    }
	    l++;
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		solve(i+1);
	}
	return 0;
}