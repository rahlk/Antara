#include <stdio.h>
#include<string.h>

int main() {
	long long int t,p=1;
	scanf("%lld",&t);
	while(t--)
	{
	    long long n,i,c;
	    scanf("%lld",&n);
	    char a[n];
	    scanf("%s",a);
	    c=strlen(a);
	    printf("Case #%lld: ",p);
	    for(i=0;i<c;i++)
	    {
	        if(a[i]=='S')
	        printf("E");
	        else
	        printf("S");
	    }
	    printf("\n");
	    p++;
	}
	return 0;
}