#include <stdio.h>

int main(void) {
	int i,k,d,c,b,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	    k=1;
	    for(k=1;k<a[i]/2;k++)
	    {
	        c=k;
	        b=a[i]-k;
	        d=a[i]-k;
	        while(c>0)
	        {
	            if(c%10==4)
	            break;
	            c=c/10;
	        }
	         while(b>0)
	        {
	            if(b%10==4)
	            break;
	            b=b/10;
	        }
	        if(c==0 && b==0)
	        break;
	    }
	    printf("Case #%d: %d %d\n",i+1,k,d);
	}
	return 0;
}