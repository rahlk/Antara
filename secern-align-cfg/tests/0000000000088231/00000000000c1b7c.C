#include <stdio.h>

int main() {
	int n;
    scanf("%d",&n);
	while(n--)
	{
	    
	    int a,b;
	   scanf("%d%d",&a,&b);
	    //cout<<a<<" "<<b<<endl;
	    int i=1;
	    while(i<10)
	    {
	      // cout<<"*"<<i*b<<"*"<<endl;
	        if(i*b >= a)
	        {
	           
	            break;
	        }
	        
	        i++;
	    }
	   // cout<<i<<"***"<<endl;
	    int l,m,z;
	    l=i;
	    m=i;
	    z=i;
	    i=0;
	    int sum = l+m+z;
	    while(sum!=a)
	    {
	        if(i%3==0)
	        {
	           l--; 
	        }
	        else
	        if(i%3==1)
	        {
	            m--;
	        }
	        else
	        {
	            z--;
	        }
	        sum = l+m+z;
	        i++;
	    }
	    printf("%d\n",(l*m*z));
	}
	return 0;
}
