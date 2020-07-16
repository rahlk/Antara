#include <stdio.h>

int isDigitPresent(long int);

int main(void) {

        int t,l;
        scanf("%d",&t);
        for(l=1;l<=t;l++)
        {
            long int n;
            scanf("%ld",&n);
            int f=0;
            if(n==4)
            printf("Case #%d: %ld %ld \n",l,1,3);
            else
            {
            for(long int i=1;i<n/5;i++)
            {
                int r=isDigitPresent(i);
                if(r==0)
                {
                    long int p=n-i;
                    int r1=isDigitPresent(p);
                    if(r1==0)
                    {
                    printf("Case #%d: %ld %ld \n",l,i,p);
                                f=1;
                                if(f==1)
                                break;
                    
                }
                if(f==1)
                                break;
                
                
            }
            
            
        }}

}
        
	return 0;
}

int isDigitPresent(long int x) 
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