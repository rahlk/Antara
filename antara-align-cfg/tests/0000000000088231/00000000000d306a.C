#include <stdio.h>

int main(void) {
   
    short int t;
    int j,y,r,i,rem;
	long int a,rev,n,f; 
	scanf("%d",&t);
	j=0;
	while(t>j)
	{
       a=0;
       rev=0;
       rem=0;
       y=0;
       scanf("%ld",&n);
        printf("Case #%d: ",(j+1));
        f=n;
    	while(f>0)
    	{
    	    rem=f%10;
    		if (rem==4)
    		{
    		    rem=3;
    		}
    		else if(rem==0)
    		{
    		    y++;
    		}
    		rev=(rev*10)+rem;
    		f/=10;
    	}
    	for(i=0;rev>0;i++)
    	{
    	    rem=rev%10;
    		a=(a*10)+rem;
    		rev/=10;
    	}
	    if(y!=0)
	    {
	        a=a*10;
	    }
	    printf("%ld %ld\n",a,n-a);
 	    j++;
    }


	return 0;
}

