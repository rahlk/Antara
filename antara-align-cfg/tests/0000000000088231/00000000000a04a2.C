#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
int T, b;
int N[110];
int num1, num2;
int main() {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N[i]);
	}
	for (int i = 0; i < T; i++) {
		num1 = 0;
		num2 = 0;
		b = N[i];
		for (int j = 0; j < 10; j++) {
			if (int(b / pow(10, 9 - j)) !=0) {
				if ((int(b / pow(10, 9 - j)) != 4) && (int(b / pow(10, 9 - j)) != 5)) {
					num1 += int((b / pow(10, 9 - j) - 1)*pow(10, 9 - j));
					num2 += int(pow(10, 9 - j));
				}
				else if (int(b / pow(10, 9 - j)) == 4) {
					num1 += (int((b / pow(10, 9 - j))) / 2)*int(pow(10, 9 - j));
					num2 += (int((b / pow(10, 9 - j))) / 2)*int(pow(10, 9 - j));
				}
				else {
					num1 += int(2*pow(10, 9 - j));
					num2 += int(3*pow(10, 9 - j));
				}
				b -= int(b / pow(10, 9 - j)) *int(pow(10, 9 - j));
			}
			

		}
		printf("Case #%d : %d %d\n", i + 1, num1, num2);
	}

	


}