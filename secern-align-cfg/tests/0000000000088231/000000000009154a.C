#include<stdio.h>
void main(void){
	int test,a=0,p=0;
	scanf("%d",&test);
	while(test!=0){
	    long long int n;
		test--;
		scanf("%lli",&n);
		long long temp,rem=0,B;
		int i=1;
	    temp = n;
		while(temp!=0){
			rem = temp % 10;
			if(rem == 4){
				rem = rem / 2;
			}
			a = a + (rem * i);
			temp = temp / 10 ;
			i = i * 10;
		} 
		B = n-a;
		p++;
		printf("CASE #%d: %d %d\n",p,a,B);
		a=0;
		B=0;
	}
}
