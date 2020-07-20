#include<stdio.h>
int main()  
{    
    int t,n,j,r, a=0,i,rev=0,rem=0,f;
	scanf("%d",&t);
	j=0;
	while(t>j)
	{
        scanf("%d",&n);
        printf("CASE  #%d:\t\t",(j+1));
        f=n;
    	while(f>0)
    	{
    	    rem=f%10;
    		if (rem==4)
    		{
    		    rem=3;
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
	    printf("%d\t\t%d\n",a,n-a);
 	    j++;
    }
    return 0;
}
