#include <stdio.h>
#include <stdbool.h>

bool isFour(int num) {
	while(num > 0) {
		int dig = num % 10;
		if(dig == 4) return true;
		num /= 10;
	}
	return false;
}

int main() {
	int t;
	scanf("%d", &t);

	int i, n, num1, num2;
	for(i=1; i<=t; i++) {
		scanf("%d", &n);
		int copy = n;
		num1 = 0, num2 = 0;
		while(1) {
			n /= 2;
			if(!isFour(n) && !isFour(copy-n)) {
				num1 = n;
				num2 = copy - n;
				break;
			}
		}
		if(num1!=0 && num2!=0)
			printf("Case #%d: %d %d\n", i, num1, num2);
		else {
			for(int i=copy; i>0; i--) {
				if(!isFour(i) && !isFour(copy - i)) {
					num1 = i;
					num2 = copy - i;
					break;
				}
			}
			printf("Case #%d: %d %d\n", i, num1, num2);
		}
	}

	return 0;
}
