#include <stdio.h>

int main() {
	int t,i,k,j,flag;
	char s[101],b[101];
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
	    scanf("%s",s);
	    i=0;
	    flag=0;
	    while(s[i]!='\0')
	    {
	        if(s[i]=='4')
	           { 
	               if(flag==0)
	               {
	                  b[i]='1';
	                   s[i]='3';
	                   flag=1;
	                   j=i;
	               }
	               else
	               {
	                  b[i]='1';
	                  s[i]='3'; 
	               }
	           }
	        else
	           b[i]='0';
	           i++;
	    }
	    b[i]='\0';
	    
	    printf("Case #%d: %s ",k,s);
	    while(b[j]!='\0')
	    { printf("%c",b[j]);
	       j++;
	    }
	     printf("\n");
	}
	return 0;
}