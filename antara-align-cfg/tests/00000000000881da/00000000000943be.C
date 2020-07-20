#include <stdio.h>
#include<string.h>

int main() {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	    long long n,i,c;
	    scanf("%lld",&n);
	    char a[n];
	    scanf("%s",a);
	    c=strlen(a);
	    for(i=0;i<c;i++)
	    {
	        if(a[i]=='S')
	        printf("E");
	        else
	        printf("S");
	    }
	    printf("\n");
	}
	return 0;
}