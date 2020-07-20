#include <stdio.h>
#include <math.h>

int main() {
	int t;
	scanf("%d",&t);
	int n[t],p[t],k[t];
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n[i]);
	}
	int j=0;
	for(int i=0;i<t;i++)
	{
	    p[i]=n[i];
	    k[i]=0;
	    j=0;
	    while(n[i]>0)
	    {

	        if(n[i]%10==4)
	        {

	            k[i]=k[i]+pow(10,j);

	        }
	        n[i]=(n[i]-n[i]%10)/10;
	        j++;
	    }
	}
		for(int i=0;i<t;i++)
	printf("Case #%d: %d %d\n",i+1,p[i]-k[i],k[i]);
	return 0;
}