#include <stdio.h>
#include <math.h>

void main()
{
  int n,p,c,count = 0,i,pos,a[50],check=0,v=0;
    printf("Enter the value");
    scanf("%d",& n);
            p=n;
            while(n != 0)
                {
                    n = n/10;
                    ++count;
                }
             c=p;
             
             for(i=0;i<=count-1;i++)
                    {
                    	a[(count-1)-i]=p%10;
                    	p=p/10;	
	            	 }
	            	
	            for(i=0;i<=count-1;i++)
	            	{
	            	   if(a[i]==4)
	            	      {
	            	         a[i]=2;
	            	         pos=(count-1)-i;
	            	         v++;
	            	      }
	            	}
	            	for(i=0;i<=count-1;i++)
	            	{
	            	printf(" %d",a[i]);
	            }
	            	
	            	check=2*pow(10,pos);
	              
	              printf("check 1 %d",check);
	              
	              if(v==0)
	              {
	                  printf("check is %d",c);
	              }
	              else
	              {
	                  
	                  
	                  printf(" check1 is %d",check);
	                  printf(" check2 is");
	                  for(i=0;i<=count-1;i++)
	                  {
	                  printf(" %d",a[i]);
	                  }
	              }
}
