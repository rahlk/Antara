#include <stdio.h>
#include <math.h>

int main() {
	int t; scanf("%d",&t);
	
	for(int i=0;i<t;i++) {
		int n; scanf("%d",&n);
		int answer[2] = {n,0};
		int cnt = 0;
		while(n>0) {
			if(n%10==4) {
				answer[0] -= pow(10,cnt);
				answer[1] += pow(10,cnt);
			}
			n /= 10;
			cnt++;
		}
		printf("Case #%d: %d %d\n",i+1,answer[0], answer[1]);	}	
}