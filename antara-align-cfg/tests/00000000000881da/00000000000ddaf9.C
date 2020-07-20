#include <stdio.h>

int main() {
	long long int t,j=1,n,i;
	scanf("%lld", &t);
	while(j<=t) {
	    scanf("%lld", &n);
	    
	    char s[2*n-1];
	    scanf("%s", s);
	    
	    printf("Case #%lld: ", j++);
	    for(i=0; s[i]!='\0'; i++) {
	        char ch = (s[i]=='S') ? 'E' : 'S';
	        printf("%c", ch);
	    }
	    printf("\n");
	}
	return 0;
}