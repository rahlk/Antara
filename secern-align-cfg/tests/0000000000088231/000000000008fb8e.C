#include<stdio.h>
void main(void){
	int t,A=0,p=0;
	scanf("%d",&t);
	while(t!=0){
	    long long int n;
		t--;
		scanf("%lli",&n);
		long long temp,rem=0,B;
		int i=1;
	    temp = n;
		while(temp!=0){
			rem = temp % 10;
			if(rem == 4){
				rem = rem / 2;
			}
			A = A + (rem * i);
			temp = temp / 10 ;
			i = i * 10;
		} 
		B = n-A;
		p++;
		printf("CASE #%d: %d %d\n",p,A,B);
		A=0;
		B=0;
	}
}