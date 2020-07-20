#include <stdio.h>

int main(void) {
	int t,n,c=0,i=0;
	char d[50000],e[50000];
	scanf("%d",&t);
	while(t != 0){
	    scanf("%d",&n);
	    scanf("%s",d);
	    while(d[i] != '\0')
	    {
	        if(d[i]=='S')
	            e[i]='E';
	        else
	            e[i]='S';
	        i++;
	    }
	    i = 0;
	    t--;
	    c++;
	    printf("Case #%d: %s\n",c,e);
	    memset(e,0,50000);
	}
	return 0;
}