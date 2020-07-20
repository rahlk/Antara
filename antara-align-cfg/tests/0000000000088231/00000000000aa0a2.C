#include<stdio.h>
int main()
{
	long n,i,y,k,t,u,sum=0,count=0;
	scanf("%ld",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{ k=a[i];
	 while(a[i]!=0)
	   {
	   	t=a[i]%10;
	   	++count;	   	 
		a[i]/=10;
		}   
	if(count==1)
	{ 
		a[i]=k;
		a[i]/=2;
		printf("\n1. %ld %ld",a[i],k-a[i]);
	}
	
		if(count==2)
	{  
	  a[i]=k;
	  if(a[i]==48||a[i]==84||a[i]==94)
	  { 	a[i]/=4;
		printf("\n2. %ld %ld",a[i],k-a[i]);
      }
      else{
		a[i]/=2;
		printf("\n2.%ld %ld",a[i],k-a[i]);
    }
	}
			if(count==3)
	{ 
		a[i]=k;
		a[i]/=2;
		printf("\n3.%ld %ld",a[i],k-a[i]);
	}
		if(count==3)
	{  
	  a[i]=k;
	  if(801<a[i]<999)
	  {
	    	a[i]/=4;
	    	printf("\n3. %ld %ld",a[i],k-a[i]);
      }
      else{
		a[i]/=2;
		printf("\n3.%ld %ld",a[i],k-a[i]);
    }
	}
	   if(count==4)
	{  
	  a[i]=k;
	  if(8001<a[i]<9999)
	  {
	    	a[i]/=4;
	    	printf("\n4. %ld %ld",a[i],k-a[i]);
      }
      else{
		a[i]/=2;
		printf("\n4.%ld %ld",a[i],k-a[i]);
    }
	}
	 if(count==5)
	{  
	  a[i]=k;
	  if(80001<a[i]<99999)
	  {
	    	a[i]/=4;
	    	printf("\n5. %ld %ld",a[i],k-a[i]);
      }
      else{
		a[i]/=2;
		printf("\n5.%ld %ld",a[i],k-a[i]);
    }
	}
		
		count=0; 
	}
	
}