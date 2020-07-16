

#include <stdio.h>
#include <stdbool.h>
#include <math.h> 



int count(long int k)
{
    int i;
   
    while (k != 0)
    {
        k /= 10;
        i++;
    }
    
    return i;
        
}

long int fun(long int k)
{
 
    int i,j;
    long int x,numm;
    i=0;
    x = 0;
    numm = k;
    j = count(k);
   
    while (numm != 0)
    {
        if ( numm % 10 == 4)
        {
         	x = x + (long int)pow(10,i);
            

    	}
       
        
        i++;
        numm = numm/10;
    }    
    
    return x;
    
}




int main(void)
{
    int t,i,j;
    
    long int n;
    long int num;
    long int num2;
    long int nn;
    i=1;
    j=1;
    scanf("%d",&t);
    for(i;i<=t;i++)
    {
    scanf("%ld",&n);
    nn = n;
        
        if(n/10 == 0) { num = n - 1; num2 = n - num; }
        
        else{
            num = fun(nn);
           num2 = n - num;
	}
   
   
    printf("Case #%ld: %ld %ld\n",j ,num ,num2);
        j++;
    }
}



