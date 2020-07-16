#include <stdio.h>

int main() {
	long long int t,p=1;
	scanf("%lld",&t);
	while(t--)
	{
	    long long int n,c=0,i=0,x;
	    scanf("%lld",&n);
	    long long int a[n],b[n];
	    while(1)
	    {
	        
	        x=n%10;
	        if(x!=4)
	        {
	            a[i]=x;
	            b[i]=0;
	        }
	        else if(x==4)
	        {
	            a[i]=2;b[i]=2;
	        }
	        i++;
	        n=n/10;
	        c++;
	        if(n==0)
	        break;
	    }
//	    printf("%lld ",c);
    printf("Case #%lld: ",p);
	    for(i=c-1;i>=0;i--)
	    {
	        printf("%lld",a[i]);
	        
	    }
	    printf(" ");
	    for(i=c-1;i>=0;i--)
    	{
    	    if(b[i]!=0)
    	    {
    	      c=i;
    	      break;
    	    }
	    }
	    for(i=c;i>=0;i--)
	    printf("%lld",b[i]);
	    printf("\n");
	    p++;
	}
	return 0;
}