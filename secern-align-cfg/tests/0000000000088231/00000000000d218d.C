#include<stdio.h>

int foursChecker(int);

int main()
{
    int n, a, b, t, i, j, flag=0, resultA, resultB;
    
    scanf("%d", &t);

	for(j=1; j<=t; j++)    
    {
        scanf("%d", &n);
        
		for(i=1;i<n/2;i++)
	    {
	        resultA = foursChecker(i);
	        resultB = foursChecker(n-i);
	        
	        if(resultA==1 && resultB==1)
	        {
	            a = i;
	            b = n-i;
	            flag=1;
	            break;
	        }
	    }
    
	    if(flag==1)
	        printf("%d %d\n", a, b);
 	}
    
    return 0;
}

int foursChecker(int n)
{
    int d;
    while(n!=0)
    {
        d = n%10;
        if(d==4)
            return 0;
        n/=10;
    }
    return 1;
}