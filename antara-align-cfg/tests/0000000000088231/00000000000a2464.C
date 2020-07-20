#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, q, n, i, c;
    int init = 1;
    long len;

    char* number = (char*) malloc(sizeof(char)*1000000000);
    char* answer = (char*) malloc(sizeof(char)*1000000000);
    
    scanf("%d", &t);
    
    for(q = 0; q < t; q++){
	c = 0;
	init = 1;
        scanf("%s", number);
	len = strlen(number);
        
        for(i = 0; i < len; i++) {
            if (number[i] == '4') {
                number[i] = '3';
                answer[c++] = '1';
		init = 0;
            }
            else {
		if(!init){
                    answer[c++] = '0';
		}
            }
	    answer[c] = '\0';
        }
	answer[i] = '\0';
        
        printf("Case #%d: %s %s\n", q+1, number, answer);
    }
}