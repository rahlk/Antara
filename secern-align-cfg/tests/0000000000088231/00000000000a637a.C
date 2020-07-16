#include <stdio.h>

int check(long long int x)
{
	int factor=1;
	int temp=x;
	while(temp)
	{
    	temp=temp/10;
    	factor = factor*10;
	}
	while(factor>1)
	{
    	factor = factor/10;
    	if(x/factor==4)
    	{
    		return 0;
		}
    	x = x % factor;
	}
	return 1;
}

int main(void) {
	int t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        long long int a,b,c=1,j,n;
        scanf("%lld ",&n);
        j=n/2;
        while(check(j)==0)
        {
            j=j/2;
        }
       
        a=j;
        b=n-j;
        printf("Case #%d: %lld %lld\n",k+1,a,b);
    }
	return 0;
}