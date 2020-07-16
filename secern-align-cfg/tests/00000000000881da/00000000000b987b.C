#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	int n;
	for(int k=1;k<=t;k++){
	    scanf("%d",&n);
	    char temp;
	    char s[2*n];
	    printf("Case #%d: ",k);
	    scanf("%c",&temp);
	    for(int i=0;i<(2*n)-2;i++){
	        scanf("%c",&temp);
	       // printf("\n input %c\n",temp);
	        if(temp=='S'){
	            
	          //  s[i]='E';
	          printf("E");
	        }
	        else {
	           // s[i]='S'
	           printf("S");
	        }
	    }
	    printf("\n");
	}
	return 0;
}