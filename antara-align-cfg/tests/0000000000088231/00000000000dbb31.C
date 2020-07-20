#include<stdio.h>
int check(int number) {
	int m;
	int n = 0;
	int place_value = 1;
	while(number > 0){
		m = number % 10;
		if (m == 4) {
			m = m - 1;
			n += m * place_value;
		} else {
			n += m * place_value;
		}
		place_value *= 10;
		number = number / 10;
	}
	return n;
}
int main() {
	int t, number, status1, status2;
	scanf("%d", &t);
	for (int j = 1; j <= t ; j++) {
		scanf("%d", &number);
		status1 = check(number);
		printf("Case #%d: %d %d\n", j, status1, number - status1);
	}
}