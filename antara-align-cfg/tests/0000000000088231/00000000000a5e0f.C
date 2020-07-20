#include<stdio.h>

int check(int n){
	while(n >0){
		if(n%10 == 4)
			return 1;
		n /=10;
	}
	return 0;
}

int main(){
	int t,n,a,b;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		scanf("%d",&n);
		for(int j=0; j<n ; j++){
			a = n-j;
			b = j ;
			if(check(a)==0 && check(b)==0)
				break;
		}
		printf("Case#%d: %d %d\n",i+1,a,b);
	}
}

