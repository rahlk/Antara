#include <stdio.h>

int main(void) {
	int t,c=0,i=0;
	char n[100],m[100];
	scanf("%d",&t);
	while(t!=0){
	    scanf("%s",n);
	    while(n[i]!='\0'){
	        if(n[i]=='4'){
	            n[i]='3';
	            m[i]='1';
	        }
	        else
	            m[i]='0';
	        i++;
	    }
	    i=0;
	    t--;
	    c++;
	    printf("Case #%d: %s %s\n",c,n,m);
	    memset(m,0,100);
	}
	return 0;
}