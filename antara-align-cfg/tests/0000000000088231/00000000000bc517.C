// Foregone Solution
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
  
// Generates and returns 'count' random 
// numbers in range [lower, upper]. 
unsigned long getRandom(int lower, int upper ) 
{ 
      
        int num = (rand() % (upper - lower + 1)) + lower; 
        return(num); 
} 

// detecting digit 4 in number
int detect_4(int n)
{
	int r;
	while(n!=0)
	{
	
		r=n%10;
		if (r==4)
			return 1;
		n=n/10;
	}
	return 0;
}
// Driver code 
int main() 
{ 
    
	int lower = 0; unsigned long upper;
  	unsigned long i,T,n[100],n1[100],n2[100];
  	//printf("Enter n:");
  	scanf("%d",&T);
  	for(i=0;i<T;i++)
  		scanf("%ld",&n[i]);
    // Use current time as  
    // seed for random generator 
    for(i=0;i<T;i++)
    {
	
	upper=n[i];
	while(1)
	{
		srand(time(0)) ;
	    n1[i]=getRandom(lower, upper); 
	   // printf("n=%ld, n1=%ld\n",n,n1);
	    int status=detect_4(n1[i]);
	    //printf("status=%d\n",status);
	    if (status==1)
	    {
	    	
			continue;
	    }
	    else
	    {
	    		n2[i]=n[i]-n1[i];
	    		//printf("n1=%d, n2=%d",n1,n2);
	    		status=detect_4(n2[i]);
	    		if(status==0)
	    		{
	    			break;
				}
				else
				{
					continue;
				}
			
		}
	}	
    	
    //printf("n1=%ld\tn2=%ld\n",n1[i],n2[i]);
    printf("Case #%d: %d %d\n",i+1,n1[i],n2[i]);
	}
    //getch();
  
    return 0; 
} 
