#include<stdio.h>
void main(){
	int t,n,temp,rem,A=0,i=1,B=0,p=0;
	scanf("%d",&t);
	while(t!=0){
		t--;
		scanf("%d",&n);
		temp = n;
		while(n!=0){
			rem = n % 10;
			if(rem == 4){
				rem = rem / 2;
			}
			A = A + (rem * i);
			n = n / 10 ;
			i = i * 10;
		} 
		B = temp-A;
		printf("Case #%d: %d %d",p,A,B);
		p++;
	}
}