#include<stdio.h>
#include<math.h>    
/*boolean contain(long double x,long double n)
{
    int count=0;
    if((int)x/10==4)
    {   
        
        return powl(10,count)*x;
    }
    else
    {
        count++;
    }
    return true;
}*/

void main()
{
    	int T,i;
    	long double A,B,N,count=0,m,x;
		
    	scanf("%d",&T);
    	
		for (i = 1; i <= T; i++) {
	    	scanf("%Lf",&N);
    	    A=N;
    	    B=0;
    	    x=N;
    	    count=0;
        	while(x<1)
        	{   
        	    
        	    if((int)x%10==4)
                {   
                   m=powl(10,count);
                   A=A-m;
                   B=B+m;
                   count++;
                   x=x/10;
                }
                else
                {   
                    x=x/10;
                    count++;
                }     
    	    }
		 printf("Case #%d: %d %d\n",i,A,B);
		    
		}
		
        
}