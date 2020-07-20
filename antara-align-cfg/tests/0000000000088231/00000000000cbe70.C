#include <stdio.h>

int checkNumber(int a, int b){
	if(a==0 || b==0){
		return 0;
	}
	a = checkFour(a);
	b = checkFour(b);
	
	if(a==1 && b==1){
		return 1;
	}
	else{
		return 0;
	}
	
}

int checkFour(int n){
	
	while(n>0 ){
		if(n%10==4){
			return 0;
		}
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
	int result1[t];
	int result2[t];
	
	for(i=0; i<t; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<t; i++){
		flag=0;
		printf("Case #%d: ", i+1);
		for(j=0; j<=arr[i]/2; j++){
			flag = checkNumber(arr[i]-j, j);
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