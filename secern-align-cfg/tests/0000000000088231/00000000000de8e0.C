#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a,b,c,t,i=0,j=0,k=0,n,p,q,l;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
	 scanf("%d",&n);
	 a=n/2;
	 b=a;

	 while((a>=n/2)&&(b>0))
	 {
	    	while(n!=0)
	 {
	     n=n/10;
	     i++;
	 }
	     p=a;
	     while((p!=0)&&(p!=4))
	     {
	         p/=10;
	         j++;
	     }
	     q=b;
	      while((q!=0)&&(q!=4))
	     {
	         q/=10;
	         k++;
	     }
	     if((i==j)&&(i==k))
	     { 
	         
	         printf("Case #%d:%d %d",l,a,b);
	         break;
	        exit(0);
	    }
	    a++;
	    b--;
	}
}
	return 0;
}