#include<stdio.h> 
int checkforfour(int x) 
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
    int t=0;
    long int n=0,i=0,b=0;
    scanf("%d",&t);
    for(int a=1;a<t;t++){
        scanf("%d",&n);
        for(i=1;i<n;i++){
    	    b=n-i;
    	    if(checkforfour(i)==0 && checkforfour(b)==0){
    		    printf("Case #%d: %ld %ld",t,i, b);
    		    break;
		    }
	    }
    }
    return 0; 
} 