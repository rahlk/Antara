#include <stdio.h>

int main() {
	int t, x;
	scanf("%d", &t);
	for (x = 1; x <= t; x++){
	    char num[101], b[101];
	    int i, j = 0;
	    scanf(" %s", num);
	    printf("Case #%d: ", x);
	    for (i = 0; num[i] != '4'; i++)
	        ;
	    for (i; num[i] != '\0'; i++){
	        if (num[i] == '4'){
	            num[i]--;
	            b[j] = '1';
	            j++;
	        }
	        else{
	            b[j] = '0';
	            j++;
	        }
	    }
	    b[j] = '\0';
    	printf("%s %s\n", num, b);
	}
	return 0;
}