#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    if(*(long long int*)b - *(long long int*)a < 0)
        return 1;
    if(*(long long int*)b - *(long long int*)a == 0)
        return 0;
    if(*(long long int*)b - *(long long int*)a > 0)
        return -1;
}

int main(){
	int x,t;
	scanf("%d", &t);
	for (x = 1; x <= t; x++){
		long long int n, l, i, j, a[2], num;
		scanf("%lld %lld", &n, &l);
		long long int b[l+1], c[l+1], d[26] = {0};
		scanf("%lld", &num);
		int temp = sqrt(num);
		for (i = 2; i <= temp; i++){
			if (num%i == 0){
				a[0] = i;
				a[1] = num/i;
				break;
			}
		}
		i = 1;
		scanf("%lld", &num);
		if (num/a[0] == a[1]){
			do{
				i++;
				scanf("%lld", &num);
			}while(num/a[0] == a[1]);
			if (num % a[1] == 0){
				for (j = 0; j <= i; j++){
					b[j] = a[(i+1-j)%2];
				}
			}
			else{
				for (j = 0; j <= i; j++){
					b[j] = a[(i-j)%2];
				}
			}
			b[j] = num / b[j-1];
		}
		else if(num % a[1] == 0){
			b[0] = a[0];
			b[1] = a[1];
			b[2] = num/a[1];
		}
		else{
			b[0] = a[1];
			b[1] = a[0];
			b[2] = num/a[0];
		}
		for (i++; i < l; i++){
			scanf("%lld", &num);
			b[i+1] = num/b[i];
		}
		for (i = 0; i <= l; i++){
			c[i] = b[i];
		}
		qsort(c, l+1, sizeof(long long), compare);
		d[0] = c[0];
		j = 0;
		for(i = 1; i <= l; i++){
			if(c[i] == d[j])
				;
			else {
				j++;
				d[j] = c[i];
			}
		}
		printf("Case #%d: ", x);
		for(i = 0; i <= l; i++){
			for(j = 0; j < 26; j++){
				if (b[i] == d[j]){
					printf("%c", 'A'+j);
					break;
				}
			}
		}
		printf("\n");
	}
}