#include <stdio.h>

int check_fours(int n);
int check_initial(int n);

int main (void) {
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        int result;
        if (numbers[i] % 2 == 0) {
        	result = check_initial(numbers[i]);
            if (result == 0) {
                printf("case #%d: %d %d\n", i+1, numbers[i]/2, numbers[i]/2);
                continue;
            }
        }
        int hi = numbers[i]/2;
        int lo = numbers[i]/2;
        int r_hi, r_lo;
        for (int j = 1; j < numbers[i]/2; j++) {
        	r_hi = check_fours(hi+j);
        	r_lo = check_fours(lo-j);
        	if (r_hi == 0 && r_lo == 0) {
        		printf("case #%d: %d %d\n", i+1, hi+j, lo-j);
                break;
        	}
        }
    }
}

int check_initial(int n) {
    int result;
    result = check_fours(n/2);
    if (result == 0) {
            return 0;
    }
    return 1;
}
int check_fours(int n) {
    int digits[] = {0,0,0,0,0,0,0,0,0,0};
    while (n > 0) {
        digits[n % 10]++;
        n = n/10;
    }
    return digits[4];
}