#include<stdio.h>
int check(int number) {
	int m;
	while(number > 0){
		m = number % 10;
		if (m == 4) {
			return -1;
		}
		number = number / 10;
	}
	return 1;
}
int main() {
	int t, number, status1, status2;
	scanf("%d", &t);
	while (t > 0) {
		scanf("%d", &number);
		for (int i = 1; i < number - 1; i++) {
			status1 = check(i);
			status2 = check(number - i);
			if (status1 != -1 && status2 != -1){
				printf("Case #%d: %d %d\n", t, i, number - i);
				break;
			}
		}
		t -= 1; 
	}
}