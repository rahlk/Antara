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
 
    long int i,j,num;
    long int x;
    i=0;
    x = 0;
    num = k;
    j = count(k);
    while (i != j-1)
    {
        if ( num % 10 == 4)
        {
         	x = x + (long int)pow(10,i);
            
        	
    	}
       
        
        i++;
        num = num/10;
    }    
    
    return x;
    
}




int main(void)
{
    long int t,n,i;
    long int num;
    long int num2;
    long int nn;
    i=1;
    scanf("%ld",&t);
    for(i;i<=t;i++)
    {
    scanf("%ld",&n);
    nn = n;
        if(count(n) < 3)
        {
         num=find(nn);
         num2=n-num;   
           
        }
        else
        {
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









