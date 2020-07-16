#include <stdio>

int main()
{

    int i,j,k,l,p,q,r,t,n,m,x,y,z,s;
    scanf("%d",&t);
    for(r=1;r<=t;r++)
    {
    	
    	scanf("%d",&n);
    	int a[7];
    	for(i=0;i<n;i++)
    	{
    		printf("%d\n", i+1);
        	fflush(stdout);
    		scanf("%d",&a[i+1]);
    	}
    	for(i=0;i<=100;i++)
    	{
    		j=a[2]-a[1]-2*i;
    		if(j<0||j>100)
    			continue;
    		k=a[3]-a[2]-4*i;
    		if(k<0||k>100)
    			continue;
    		s=a[6]-i*64-8*j-4*k;
    		p=a[5]-i*32-4*j-2*k;
    		q=a[4]-i*16-4*j-2*k;
    		z=s-p;
    		if(z<0||z>100)
    			continue;
    		y=s-q-z;
    		if(y<0||y>100)
    			continue;
    		x=(q-z-y)/2;
    		if(x<0||x>100)
    			continue;
    		break;
    	}
    	printf("%d, %d, %d, %d, %d, %d,\n", i,j,k,x,y,z);
        fflush(stdout);
    }
    return 0;
}