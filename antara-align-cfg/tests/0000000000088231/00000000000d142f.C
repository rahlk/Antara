#include <stdio.h>

int main(void) {
   
     long  int t,n,j,y,r, a,i,rev,rem,f;
	scanf("%d",&t);
	j=0;
	while(t>j)
	{
       a=0;
       rev=0;
       rem=0;
       y=0;
       scanf("%d",&n);
        printf("Case  #%d:  ",(j+1));
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
	    printf("%d  %d\n",a,n-a);
 	    j++;
    }


	return 0;
}

