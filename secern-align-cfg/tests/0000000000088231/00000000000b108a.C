#include <stdio.h>

int main() {
	int t,i;
	char s[101],b[101];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%s",s);
	    i=0;
	    while(s[i]!='\0')
	    {
	        if(s[i]=='4')
	           { 
	             b[i]='1';
	             s[i]='3';
	           }
	        else
	            b[i]='0';
	            
	           i++;
	    }
	    b[i]='\0';
	    
	    printf("%s %s\n",s,b);
	}
	return 0;
}