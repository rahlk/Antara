#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isPrime(long int n)
{
	int f=1;long int i;
	for (i=2;i<n;i++)
		if(n%i==0)
		{
			f=0;
			break;
		}
	return f;
}

void main()
{
	int T,i,j=0,L,l=0;
	long int N,k;
	char answers[T][101];
	scanf("%d",&T);
	for (i=1;i<=T;i++)
	{	scanf("%ld %d",&N,&L);
		long int a[L];
		char ch='A',temp=' ',letters[L+1];
		do{
			scanf("%ld%c",&a[j++],&temp);
		}while(temp!='\n');
		for (k=2;k<=N && ch<='Z';k++)
		{
			if (isPrime(k))
			{	
				int flag=0;
				for (j=0;j<L;j++)
				{
					if(isPrime(a[j]/k) && a[j]%k==0)
					{	if (j==0 && a[j+1]%k!=0)
						letters[0]=ch;
						else
						letters[++j]=ch;
						flag=1;
					}
				}
				if (flag)
					ch++;
			}

		}
		letters[L+1]='\0';
		strcpy(answers[i-1],letters);
	}
	for (i=0;i<T;i++)
		printf("Case #%d: %s\n",i+1,answers[i]);
}