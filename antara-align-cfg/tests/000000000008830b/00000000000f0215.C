#include <stdio.h>
int HCF(int, int);
int main(void) 
{
	long long int t, t1=0;
	char chars[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%lld", &t);
	while(t>0)
	{
		long long int pos, hcf,x=-1, arr[100000000], i, prime[100000000],k, prime2[100000000],prime3[100000000],j, temp;
		long long int n, max;
		char char2[1000];
		scanf("%lld%lld", &max, &n);
		for(i=0;i<n;i++)
			scanf("%lld", &arr[i]);
		hcf=HCF(arr[0], arr[1]);
		prime2[0]=prime[0]=arr[0]/hcf;
		prime2[1]=prime[1]=hcf;
		for(i=2;i<=n;i++)
		{
			prime2[i]=prime[i]=arr[i-1]/prime[i-1];
		}
		
		for (i = 0; i <=n-1; i++)
			for (j = 0; j <=n-i-1; j++)  
				if (prime2[j] > prime2[j+1]) 
				{
            		temp=prime2[j];
            		prime2[j]=prime2[j+1];
            		prime2[j+1]=temp;
				}
		
		for(i=0;i<=n;i++)
		{
			if(prime2[i]!=prime2[i+1])
			prime3[++x]=prime2[i];
		}
	
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(prime[i]==prime3[j])
				{
					pos=i;
					char2[i]=chars[j];
					break;
				}
			}
		}
		t1++;
		printf("Case #%lld: ", t1);
		for(i=0;i<=n;i++)
			printf("%c", char2[i]);
		printf("\n");
		t--;
	}
	return 0;
}

int HCF(int a, int b)
{
	int rem=1;
	while(rem!=0)
	{
		rem=b%a;
		b=a;
		a=rem;
	}
	return b;
}
