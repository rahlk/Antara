#include <stdio.h>

int main(void) {
	int t,n,rev,res=0,temp;
	scanf("%d",&t);
	int arr[t];
	for(int i=0;i<t ;i++){
	     scanf("%d",&n);
	     arr[i] = n;
	}
	for(int i=0; i<t; i++){
	    temp = arr[i];
	    res = 0;
	    while(temp>0){
	        int rem = temp%10;
	        rev = rev*10 + rem;
	        temp = temp / 10;
	    }
	    while(rev>0){
	        int rem = rev%10;
	        if(rem==4){
				res = res*10 + 3;
			}else{
				res = res*10;
			}
			rev = rev/10;
	    }
	    int num = arr[i] - res;
	    printf("Case #%d : %d %d\n",(i+1),num,res);
	}
	return 0;
}

