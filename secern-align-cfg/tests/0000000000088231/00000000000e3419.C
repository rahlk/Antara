#include <stdio.h>
#include <math.h>

int isDigitPresent(long int,long int);

int main(void) {

        int t,l;
        scanf("%d",&t);
        for(l=1;l<=t;l++)
        {
            long int n;
            scanf("%ld",&n);
            for(long int i=1;i<n/2;i++)
            {
                 long int p=n-i;
                int r=isDigitPresent(i,p);
                    if(r==0)
                    {
                    printf("Case #%d: %ld %ld \n",l,i,p);
                                break;
                    
                }
                
            }
            
            
        }
        
	return 0;
}

int isDigitPresent(long int x,long int x1) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 4) 
            break; 
  
        x = x / 10; 
    } 
    while (x1 > 0) 
    { 
        if (x1 % 10 == 4) 
            break; 
  
        x1 = x1 / 10; 
    } 
    if(x==0&&x1==0)
    return 0; 
    else
    return 1;
} 