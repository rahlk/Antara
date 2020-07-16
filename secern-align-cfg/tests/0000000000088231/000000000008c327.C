#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,k,m,n;
	int T,t;
	int a[200],b[200],c[200];
	char s[200];
	
	fscanf(stdin, "%d", &T);
	for(t=1;t<=T;t++)
	{
		fscanf(stdin, "%s", s);
		n=strlen(s);
		
		for(i=0;i<n;i++)
		{
			a[i] = s[i]-48;
			
			if(a[i]<7) b[i]=a[i]/2;
			else b[i]=2;
			c[i]=a[i]-b[i];
		}
		
		printf("Case #1: ");
		
		k=0;
		for(i=0;i<n;i++)
		{
			if(b[i]==0 && k==0) continue;
			else k=1;
			printf("%d",b[i]);
		}
		if(k==0)
		{
			printf("1");
			c[n-1]--;
			for(i=n-1;i>0;i--)
			{
				if(c[i]<0)
				{
					c[i]+=10;
					c[i-1]--;
				}
			}
		}
		printf(" ");

		k=0;
		for(i=0;i<n;i++)
		{
			if(c[i]==0 && k==0) continue;
			else k=1;
			printf("%d",c[i]);
		}

		printf("\n");
	}
	return 0;
}

