#include <stdio.h>

int checkFour(int n){
	if(n==0) return 0;
	while(n>0){
		if(n%10==4) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int n, i, j;
	int t;
	int flag=0;
	
	scanf("%d", &t);
	int arr[t];
	
	for(i=0; i<t; i++) scanf("%d", &arr[i]);
	
	for(i=0; i<t; i++){
		flag=0;
		printf("Case #%d: ", i+1);
		for(j=0; j<=arr[i]/2; j++){
			if(checkFour(arr[i]-j)) if(checkFour(j)) flag = 1;
			if(flag){
				printf("%d %d\n", arr[i]-j, j);
				goto x;
			}
		}
		x:
			flag=0;
	}
	
	return 0;
}