#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int t,a0,i; 
    scanf("%i", &t);
    for(a0 = 0; a0 < t; a0++){
    	int n;
	    scanf("%i", &n);
    	int m = (n - 1) * 2;
        char* s = (char *)malloc(m * sizeof(char));
        scanf("%s", s);
        for(i = 0; i < m; i++){
        	if(s[i] == 'S'){
        		s[i] = 'E';
			}
        	else if(s[i] == 'E'){
        		s[i] = 'S';
			}
		}
		printf("Case #%i: %s\n",( a0 + 1 ),s);
    }
    return 0;
}

