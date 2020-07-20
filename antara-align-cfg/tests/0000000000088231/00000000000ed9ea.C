

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
    int t,i;
    
    long int n;
    long int num;
    long int num2;
    long int nn;
    i=1;
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
   
   
    printf("Case #%ld: %ld %ld\n",t ,num ,num2);
    }
}


bool ishave(int n)
{
    
    while (n != 0)
    {
        if ((n % 10) == 4) 
        {
            return true;
        }
        n = (n - (n%10))/10;   
    }
    return false;
}


int find(int x,int y) 
{
    if(ishave(x) == true)
    {
        find((x-1),(y+1));
    }

    else if(ishave(y) == true)
    {
        find((x-1),(y+1));
    }

    else  
    {
        return x;
    }
}







