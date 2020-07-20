#include<stdio.h>
#include<string.h>
typedef struct letter
{
	char letter;
	int primes;
};
struct answer
{
	char op[100];
};
void main()
{
	int i,j,k,T,p;
	int N,L;
	scanf("%d",&T);
	struct answer ans[T];
	for(i=0;i<T;i++)
	{
		strcpy(ans[i].op,"\0");	
	}
	for(p=0;p<T;p++)
	{
		scanf("%d %d",&N,&L);
		int a[L];
		for(i=0;i<L;i++)
		{
			scanf("%d",&a[i]);
		}
		int prime[L+1],prime1[26],count=0,count1=0,temp;
		for(i=0;i<L+1;i++)
		{
			prime[i]=0;
		}
		for(i=0;i<26;i++)
		{
			prime1[i]=0;
		}
		for(j=1;j<=a[0];j++)
		{
			if(a[0]%j==0 && j!=1 && j!=a[0])
			{
				prime[count++]=j;
				prime1[count1++]=j;
			}
		}
		for(i=1;i<L;i++)
		{
			for(j=1;j<=a[i];j++)
			{
				if(a[i]%j==0 && j!=1 && j!=a[i])
				{
					if(j!=prime[count-1] && j!=prime[count-2])
					{
						prime[count++]=j;
					}
					for(k=0;k<26;k++)
					{
						if(j==prime1[k])
						{
							break;
						}
					}
					if(k==26)
					{
						prime1[count1++]=j;
					}
				}
			}
		}
		for(i=1;i<26;i++)
		{
			for(j=0;j<i;j++)
			{
				if(prime1[j]>prime1[i])
				{
					temp=prime1[i];
					for(k=i;k>j;k--)
					{
						prime1[k]=prime1[k-1];
					}
					prime1[j]=temp;
					break;
				}
			}
		}
		struct letter l[26];
		for(i=0;i<26;i++)
		{
			l[i].letter=(char)(65+i);
			l[i].primes=prime1[i];
		}
		char opp[L+1];
		opp[0]="\0";
		for(i=0;i<L+1;i++)
		{
			for(j=0;j<26;j++)
			{
				if(prime[i]==l[j].primes)
				{
					opp[i]=l[j].letter;
					break;
				}
			}
		}
		strcpy(ans[p].op,opp);
	}
	for(i=0;i<T;i++)
	{
		printf("Case #%d: %s\n",i+1,ans[i].op);
	}
}