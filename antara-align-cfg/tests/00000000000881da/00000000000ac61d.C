#include <stdio.h>
#include<string.h>
int main() {
	int t,to;
	scanf("%d",&t);
	to=t;
	char ch;
	while(t){
	    t--;
	    int len;
	    scanf("%d",&len);
	    scanf("%c",&ch);
	    len=2*len-2;
	    char str[len+1];
	    scanf("%[^\n]",str);
	    printf("Case #%d: ",to-t);
	    for(int i=0;i<len;i++){
	        if(str[i]=='S')printf("E");
	        else printf("S");
	    }
	    printf("\n");
	}
	return 0;
}