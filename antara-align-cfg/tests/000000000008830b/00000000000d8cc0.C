#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(long int n)
{
	int f=1;long int i;
	for (i=2;i<(int)sqrt(n);i++)
		if(n%i==0)
		{
			f=0;
			break;
		}
	return f;
}

int main()
{
	int T,i,j=0,L,l=0;
	long int N,k;
	scanf("%d",&T);
	char answers[T][101];
	for (i=1;i<=T;i++)
	{	scanf(" %ld %d",&N,&L);j=0;
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
					{	if (a[j+1]%k==0 ||j==L-1) 
					    letters[j+1]=ch;
					    
					    else
					    letters[j]=ch;
					   
						flag=1;
						//printf("%c %d %ld\n",ch,j,k);
					}
				}
				if (flag)
					ch++;
			}

		}
		letters[L+1]='\0';
		//printf("%s done\n",letters);
		sprintf(answers[i-1],"%s",letters);
	}
	
	for (i=0;i<T;i++)
		printf("Case #%d: %s\n",i+1,answers[i]);
		return 0;
}