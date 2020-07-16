#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	long long num, num2, check = 0;
	scanf("%d", &t);
	for (int j = 1; j <= t; j++ ){
		scanf("%lld", &num);
		num2 = num;
		if (num2 % 10 == 4)
			check += 1;
		for (int i = 1;; i++){
			if (num2/10 == 0)
				break;
			num2 = num2 / 10;
			if (num2 % 10 == 4)
				check += pow(10.0,i);
		}
		printf("Case #%d: %lld %lld\n", j, num - check, check);
		check = 0;
	}

	
}