#include <stdio.h>
#include<string.h>

int main() {
	long long int t,k=1;
	scanf("%lld",&t);
	while(t--)
	{
	        long long int n,j,c;
	    scanf("%lld",&n);
	    char l[50020];
      scanf("%s",l);
    	                    c=strlen(l);
    	 printf("Case #%lld: ",k);
            	    for(j=0;j<c;j++)
            	    {
            	        if(l[j]=='S')
            	        {
            	            printf("E");
            	        }
            	        else
            	        {
            	            printf("S");}
            	    }
        	    printf("\n");
        	    k++;
}
	return 0;
}