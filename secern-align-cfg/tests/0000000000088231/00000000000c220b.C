#include <stdio.h>
#include <string.h>
int main() {
	int T,i,j,t;
	char N[101],temp[101];
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%s\n",N);
	    for(j=0;j<strlen(N);j++)
	    {
	        if(N[j] == '4')
	        {
	            temp[j] = '1';
	            N[j] = '3';
	        } else
	        {
	            temp[j] = '0';
	        }
	    }
	    printf("Case #%d: %s %s\n",i+1,N,temp);
	}
	return 0;
}