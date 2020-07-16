// Foregone Solution
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() 
{ 
    
	int lower = 0, status; unsigned long upper;
  	unsigned long n[100],n1[100],n2[100];
  	int i,T;
  	//printf("Enter n:");
  	scanf("%d",&T);
  	for(i=0;i<T;i++)
  	{
	  
  		scanf("%ld",&n[i]);
  		//printf("n[%d]=%ld\n",i,n[i]);
    }
   /*for(i=0;i<T;i++)
  	{
	  
  		//scanf("%ld",&n[i]);
  		printf("n[%d]=%ld\n",i,n[i]);
   }*/
    // Use current time as  
    // seed for random generator 
    for(i=0;i<T;i++)
    {
	
		upper=n[i];
		
	
		L1:	srand(time(0)) ;	    //n1[i]=getRandom(lower, upper); 
		    n1[i]=(rand() % (upper - lower + 1)) + lower;
		    //printf("n[%d]=%ld, n1[%d]=%ld \n",i,n[i],i,n1[i]);
		    int r, temp;
		    temp=n1[i];			
			while(temp!=0)
			{
			
				r=temp%10;
				if (r==4)
				{
					//status=1;
					goto L1;
				}
				
				//	status=0;
				temp=temp/10;
			}
			// printf(" *** Test-1( %d )****\n",i);
			// No 4 in n1
	    	n2[i]=n[i]-n1[i];
	    	//printf("i=%d, n1[%d]=%d, n2[%d]=%d\n",i,i,n1[i],i,n2[i]);
	    	
	    	temp=n2[i];
			while(temp!=0)
			{
		
				r=temp%10;
				if (r==4)
					{
						//status=1;
						goto L1;
					}
				temp=temp/10;
			}	
		    //printf(" *** Test-2( %d )****\n",i);
			//printf("i=%d,n[%d]=%ld, n1[%d]=%ld, n2[%d]=%d\n",i,i,n[i],i,n1[i],i,n2[i]);	
			printf("Case #%d: %d %d\n",i+1,n1[i],n2[i]);
	}// end of for loop
	
	return 0; 
} 
