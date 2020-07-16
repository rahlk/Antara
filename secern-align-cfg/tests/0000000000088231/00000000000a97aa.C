#include <stdio.h>
#include<math.h>

int main() {
	long long int t,x=1,i,j,m,n;
	scanf("%lld",&t);
	while(x<=t)
	{
	    scanf("%lld",&n);
	    m=n;
	    int sum=0,count=0;
	    while(1)
	    {
	        if(m%10!=0)break;
	        else{
	            count++;m=m/10;
	        }
	    }m=n;
	    while(m>0)
	    {
	        i=m%10;
	        if(i==4)
	         sum=(sum*10)+1;
	        else
	        sum=(sum*10)+i;
	        m=m/10;
	   }
	   
	   m=sum;
	   sum=0;
	   while(m>0)
	    {
	        i=m%10;
	        if(i==4)
	         sum=(sum*10)+1;
	        else
	        sum=(sum*10)+i;
	        m=m/10;
	   }
	   if(count!=0)sum=sum*(pow(10,count));
	   i=sum;j=sum-n;
	   if(j<0)j=j*(-1);
	   printf("Case #%lld: %lld %lld\n",x,i,j);
	   x++;
	}
	return 0;
}