#include <stdio.h>
#include <math.h>

int hasFour(double num) {
    int numOfDigits = log10(num) + 1;
    for(int i=0;i< numOfDigits; i++, num/=10)
    	if ((int) num % 10 == 4)
    	    return 1;
    return 0;
}

void checkAndDisplay(int caseNo, double splittedValue[]) {
    if (hasFour(splittedValue[0]) == 1 || hasFour(splittedValue[1]) == 1) {
      splittedValue[0] -= 1;
      splittedValue[1] += 1;
      checkAndDisplay(caseNo, splittedValue);
    } else {
      printf("Case #%d: %lf %lf", caseNo, splittedValue[0], splittedValue[1]);
    }
}

double* split (double num) {
    double values[2] = {};
    if ((int) num % 2 == 0) {
        values[0] = values[1] = num / 2;
    } else {
        values[0] = values[1] = (num - 1) / 2;
        values[1] += 1;
    }
    return values;
}

int main(void) {
	int n;
    scanf("%d", &n);
    double list[100] = {};
    for(int i = 0; i <= n; i++) {
        scanf("%lf", &list[i]);
    }
    for(int j = 0; j <= n; j++) {
      double* splittedValue = split(list[j]);      
      checkAndDisplay(j, splittedValue);
    }
	return 0;
}