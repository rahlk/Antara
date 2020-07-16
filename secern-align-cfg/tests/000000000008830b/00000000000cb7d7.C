#include<stdio.h>
#include<math.h>
int pr[10000]={0};
int alpha[26]={0};
int primes(int n)
{
    int l=sqrt(n);
    for(int i=2;i<l;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
}

main()
{
	int t,i,j,t1=1,c2=0,n,lim,notcomm,notcomm2,fac1,fac2,c,c1,comm;
	int a[100];
	int str[101];
	scanf("%d",&t);
	while(t1<=t)
	{
		c=0;
		c1=0;
		scanf("%d",&lim);
		for(i=0;i<=lim;i++)
		{
			pr[i]=0;
		}
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			fac1=primes(a[i]);
			fac2=a[i]/fac1;
			pr[fac1]=1;
			pr[fac2]=1;
			
		}	
		for(i=0;i<=lim;i++)
		{
			if(pr[i]!=0)
			{
				pr[i]=65+c;
				c++;
			}
			
		}
		for(i=0;i<n-1;i++)
		{
			while(a[i]==a[i+1])
			{
				i=i+1;
			}
			fac1=primes(a[i]);
			fac2=a[i]/fac1;
			if(a[i+1]%fac1==0)
			comm=fac1;
			else
			comm=fac2;
			str[i+1]=(char)(pr[comm]);
			c2++;
			notcomm=a[i]/comm;
			notcomm2=a[i+1]/comm;
			str[i]=(char)(pr[notcomm]);
			c2++;
			j=i;
			c1=0;
			while(j>0 && a[j]==a[j-1])
			{
				if(c1%2==0)
				str[j-1]=(char)(pr[comm]);
				else
				str[j-1]=(char)(pr[comm]);
				c2++;
				c1++;
				j--;
			}
			if(i==n-2 && a[i+1]!=a[i])
			{
				str[i+2]=(char)(pr[notcomm2]);
				c2++;
			}
		}
		str[n+1]='\0';
		printf("Case #%d: ",t1);
		for(i=0;i<=n;i++)
		{
			printf("%c",str[i]);
		}
		
		
		t1++;
		printf("\n");
	}
}