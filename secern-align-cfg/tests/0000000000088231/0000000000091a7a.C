#include <stdio.h>

int main()
{

	int TC;
	int count;
	int num;
	int A;
	int B;
	int Narr[100];
	int Aarr[100];
	int Barr[100];
	int tmp;
	int ten_square;
	int i;
	int j;

	scanf("%d", &TC);

	for (i = 1; i <= TC; i++) {
		scanf("%d", &num);
		tmp = num;
		count = 0;
		ten_square = 1;

		while (tmp) {
			count++;
			tmp /= 10;
			ten_square *= 10;
		}
		ten_square /= 10;
		
		tmp = num;
		for (j=0; j<count; j++) {	
			Narr[count - 1 - j] = tmp % 10;
			tmp /= 10;
		}

		if (num == ten_square) {
			A = 1;
			B = ten_square - 1;
		} else {
			Aarr[0] = 1;
			Barr[0] = Narr[0] - 1;

			for (j=1; j<count; j++) {
				if (Narr[j] == 4) {
					Aarr[j] = Barr[j] = 2;
				} else {
					Aarr[j] = 0;
					Barr[j] = Narr[j];
				}
			}
			/* convert array to integer */
			A = B = 0;
			for (j=0; j<count; j++) {
				A = A * 10 + Aarr[j];
				B = B * 10 + Barr[j];
			}

		}

		printf("Case #%d: %d %d\n", i, A, B);	

	}
	


	return 0;
}
