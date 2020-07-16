#include <stdio.h>


int check(int n){
    int i=n;
    int r;
    while(i!=0){
        r=i%10;
        if(r==4)return 0;
        i=i/10;
    }
    return 1;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    int a=n/2;
	    int b=n-a;
	   
          while((!check(a))||(!check(b))){
             
            a=a+1;
            b=b-1;
        }
        printf("Case #%d:%d %d\n",i+1,a,b);
	}
	return 0;
}