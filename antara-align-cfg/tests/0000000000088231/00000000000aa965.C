#include <stdio.h>
#include<stdlib.h>
int finddig(long long int p,int *digits){
    int len=0;
    for(int i=0;i<100;i++){
        if(p==0){
            break;
        }
        digits[i]=p%10;
        p=p/10;
        len++;
    }
    return len;
}
void numbers (int* digits,int* first,int* second,int len){
    for(int i=len-1;i>=0;i--){
        if(digits[i]==4){
            first[i]=2;
            second[i]=2;
        }
        else{
            first[i]=digits[i];
            second[i]=0;
        }
    }
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    long long int p,ans1,ans2;
	    ans1=0;
	    ans2=0;
	    scanf("%lld",&p);
	    int* digits;
	    digits=(int*)malloc(100*sizeof(int));
	    int len=finddig(p,digits);
	    int* first,*second;
	    first=(int*)malloc(len*sizeof(int));
	    second=(int*)malloc(len*sizeof(int));
	    numbers(digits,first,second,len);
	    long long int tenmul=1;
	    for(int p=0;p<len;p++){
	        ans1+=first[p]*tenmul;
	        ans2+=second[p]*tenmul;
	        tenmul=tenmul*10;
	    }
	    free(digits);
	    free(first);
	    free(second);
	    printf("%lld %lld\n",ans1,ans2);
	}
	return 0;
}