#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void intToArray(int digit,int put, int *array);
int checkContainer(int digit, int *array);
int checkFExists(int digit, int *array);

int main(void) {
    int input, a_first, b_second;
    int arr[10], arr_a[10], arr_b[10], random_value[10], check_value[10];
    int ndigits, adigits, bdigits, cdigits, ddigits;
	int c, d_counter = 0, success = 0, try, count;
	
	scanf("%d\n", &count);
	
	for (int asdf = 0; asdf < count; asdf++) {
		scanf("%d", &input);
		ndigits = floor(log10(input)) + 1;

		//save value to array
		if (ndigits > sizeof(arr) / sizeof(int)) {
			printf("Error! %d\n", input);
			return 0; //exit
		} else {
			// Value to INT Array
			intToArray(ndigits, input, arr);

			//check whether input contains value 4;
			if (checkContainer(ndigits, arr) == ndigits) {
				printf("No four in digits!\n");
			} else {
				// Get Random Value, which DOES NOT CONTAIN 4
				while (d_counter < 1) {
					srand(time(NULL));
					c = rand() % ((input/2) + 1 - 1) + 1;
					cdigits = floor(log10(c)) + 1;
					intToArray(cdigits, c, random_value);
			
					ddigits = floor(log10((input - c))) + 1;
					intToArray(ddigits, (input - c), check_value);

					if (checkFExists(cdigits, random_value) < 1 && checkFExists(ddigits, check_value) < 1) {
						break;
					}
				}
		
				for (int i = 1; i < input; i++) {
					a_first = i;
					b_second = input - i;
					//in here, a, b should NOT contain 4.
					adigits = floor(log10(a_first)) + 1;
					bdigits = floor(log10(b_second)) + 1;
					intToArray(adigits, a_first, arr_a);
					intToArray(bdigits, b_second, arr_b);

					if (i == c) {
						if (checkFExists(adigits, arr_a) >= 1 || checkFExists(bdigits, arr_b) >= 1) {
						} else {
							success++;
							printf("Case #%d: %d %d\n", success, a_first, b_second);
						}
					}
				}
			}
		}
	}	

    return 0;
}

void intToArray(int digit, int put, int *array) {
	for (int i = digit - 1; i > -1; i--) {
		array[i] = put % 10;
		put = put / 10;
	}
}

int checkContainer(int digit, int *array) {
	int check = 0;
	for (int i = 0; i < digit; i++) {
		if (array[i] != 4) {
			check++;
		}
	}
	return check;
}

int checkFExists(int digit, int *array) {
	int check = 0;
	for (int i = 0; i < digit; i++) {
		if (array[i] == 4) {
			check++;
		}
	}
	return check;
}