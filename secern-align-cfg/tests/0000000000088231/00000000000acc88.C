#include<stdio.h>
int main()
{
	long n,i,y,k,t,u,sum=0,count=0;
	static long w=0;
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
		++w;   
	if(count==1)
	{ 
		a[i]=k;
		a[i]/=2;
		printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
	}
	
		if(count==2)
	{  
	  a[i]=k;
	  if(a[i]==48||a[i]==84||a[i]==94)
	  { 	a[i]/=4;
		printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
		
		if(count==3)
	{  
	  a[i]=k;
	  if(801<a[i]<999)
	  {
	    	a[i]/=4;
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	   if(count==4)
	{  
	  a[i]=k;
	  if(8001<a[i]<9999)
	  {
	    	a[i]/=16;
	    	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	 if(count==5)
	{  
	  a[i]=k;
	  if(80001<a[i]<99999)
	  {
	    	a[i]-=11111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	
	 if(count==6)
	{  
	  a[i]=k;
	  if(800001<a[i]<999999)
	  {
	    	a[i]-=111111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	
	 if(count==7)
	{  
	  a[i]=k;
	  if(8000001<a[i]<9999999)
	  {
	    a[i]-=1111111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	
	 if(count==8)
	{  
	  a[i]=k;
	  if(80000001<a[i]<99999999)
	  {
	    	a[i]-=11111111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	
	 if(count==9)
	{  
	  a[i]=k;
	  if(800000001<a[i]<999999999)
	  {
	    	a[i]-=111111111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	
	 if(count==10)
	{  
	  a[i]=k;
	  if(8000000001<a[i]<9999999999)
	  {
	    	a[i]-=1111111111; ///////
	    printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
      }
      else{
		a[i]/=2;
	printf("\nCase #%ld:  %ld %ld",w,a[i],k-a[i]);
    }
	}
	count=0; 
	}
	
}