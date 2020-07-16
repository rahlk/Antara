#include <stdio.h>

isDigitPresent(int);

int main(void) {

        int t,l;
        scanf("%d",&t);
        for(l=1;l<=t;l++)
        {
            long int n,a,b;
            scanf("%ld",&n);
            
            for(long int i=1;i<=n;i++)
            {
                int r=isDigitPresent(i);
                
                if(r==0)
                {
                    for(long int j=1;j<=n;j++)
                    {
                        int r1=isDigitPresent(j);
                        if(r1!=1)
                        {
                            if(i+j==n)
                            {
                                printf("Case #%d: %ld %ld \n",l,i,j);
                            }
                        }
                    }
                    
                }
                
                
            }
            
            
        }


        
	return 0;
}

int isDigitPresent(int x) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 4) 
            break; 
  
        x = x / 10; 
    } 
    if(x>0)
    return (1); 
    else
    return(0);
} 