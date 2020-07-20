#include <stdio.h>
int main()
{
	int i,j,k,n,t,x=0,y=1,z=0;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	scanf("%d",&a[i]);
	for(i=0;i<t;i++)
	{
		k=0;y=1;z=0;
		n=a[i];
		while(n!=0)
		{
			n=n/10;
			k++;
		}
		n=a[i];
		for(j=0;j<k;j++)
		{
			if(n%10==4)
			y=y*10+1;
			else
			y=y*10;
			n=n/10;
		}
		for(j=0;j<k;j++)
		{
			z=z*10+(y%10);
			y=y/10;
		}
		if(z!=0)
		printf("Case #%d:%d %d\n",i+1,z,a[i]-z);
		else
		{
			a[i]=a[i]-1;
			k=0;y=1;z=0;
		n=a[i];
		while(n!=0)
		{
			n=n/10;
			k++;
		}
		n=a[i];
		for(j=0;j<k;j++)
		{
			if(n%10==4)
			y=y*10+1;
			else
			y=y*10;
			n=n/10;
		}
		for(j=0;j<k;j++)
		{
			z=z*10+(y%10);
			y=y/10;
		}
		if(z==0)
		printf("Case #%d:%d %d\n",i+1,1,a[i]-z);
		else
		printf("Case #%d:%d %d\n",i+1,z,a[i]-z);
		}
	}
}