#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int GetDigit(int num){
  return log10(num)+1;
}

int CheckNum(int num, int digit) {
	int i;
	int check = 0;
	char strnum[100];
	snprintf(strnum, 100, "%d", num);
	for(i=0;i<digit;i++) {
		if(strnum[i]=='4'){
			check++;
		}
	}
	return check;
}
// ,
void SplitNum(int num, int digit, int *ans) {
	int i, j;
	int tmpn;
	char tmpstrn[1];
	int n1, n2;
	int sum1 = 0, sum2 = 0, digi = 1;
	char strnum[100];
	snprintf(strnum, 100, "%d", num);
	for(i=0;i<digit;i++) {
	    j = digit-i-1;
	    tmpstrn[0] = strnum[j];
		tmpn = atoi(tmpstrn);
		
		if(tmpn == 0) {
			continue;
		}
		n1 = tmpn / 2;
		n2 = tmpn - n1;
		if(n1 == 4) {
			n2++;
			n1--;
		}
		if(n2 == 4) {
			n2++;
			n1--;
		}
		sum1 += n1 * digi;
		sum2 += n2 * digi;
		digi *= 10; 
	}
	ans[0] = sum1;
	ans[1] = sum2;
	return;
}

int main(void){
	int q, num; //INPUT
	int i;
	int check, digit;
	int ans[2];
	int case_num = 0;

	scanf("%d",&q);
	for(i=0; i<q; i++) {
		scanf("%d", &num);
		digit = GetDigit(num);
		check = CheckNum(num, digit);
		if(check == 0) {
			continue;
		} else {
			case_num++;
			SplitNum(num, digit, ans);
			printf("Case #%d: %d %d\n", case_num, ans[0], ans[1]);
		}
		(void)getchar();
	}
	return 0;
}
