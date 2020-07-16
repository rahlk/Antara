#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long long int t, n, k;
	scanf("%lld", &t);
	for (int x = 1; x <= t; x++){
		long long int c[100000], d[100000], i, j, max_c, max_d, count = 0;
		scanf("%lld %lld", &n, &k);
		for (i = 0; i < n; i++){
			scanf("%lld", &c[i]);
		}
		for (i = 0; i < n; i++){
			scanf("%lld", &d[i]);
		}
		for (i = 0;i < n; i++){
			max_c = 0;
			max_d = 0;
			for (j = i; j < n; j++){
				if (c[j] > max_c){
					max_c = c[j];
				}
				if (d[j] > max_d){
					max_d = d[j];
				}
				if (abs(max_c-max_d) <= k){
					count++;
				}
			}
		}
		printf("Case #%d: %lld\n", x,count);
	}
}