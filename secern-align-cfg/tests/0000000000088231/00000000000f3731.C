#include<stdio.h> 
int checkforfour(long int x) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 4) 
            return 1; 
  
        x = x / 10; 
    } 
    return 0; 
} 
  
int main() 
{
    int m=0,t=0;
    long int n=0,i=0,b=0;
    scanf("%d",&t);
    m=t;
    while(t--){
        scanf("%d",&n);
        for(i=1;i<n;i++){
    	    b=n-i;
    	    if(checkforfour(i)==0 && checkforfour(b)==0){
    		    printf("Case #%d: %ld %ld\n",m-t,i, b);
    		    break;
		    }
	    }
    }
    return 0; 
} 