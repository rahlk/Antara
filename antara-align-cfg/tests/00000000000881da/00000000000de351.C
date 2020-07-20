#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int t,n,i,j,len;
	char *c;
	scanf("%d",&t);
	j=1;
	while(j<=t)
	{
	    scanf("%d",&n);
	    c = malloc(sizeof(char)*(2*n-1));
	    printf("Case #%d: ",j);
	    scanf("%s",c);
	    
	    len = strlen(c);
	    for(i=0;i<len;i++)
	    {
	        if(c[i]=='E')
	            c[i]='S';
	       else
	            c[i]='E';
	    }
	    printf("%s\n",c);
	    j++;
	}
	return 0;
}

