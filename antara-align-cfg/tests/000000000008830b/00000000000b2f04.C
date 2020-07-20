#include <stdio.h>
#include <stdlib.h>

unsigned long long calc_prime(unsigned long long semiprime)
	{
	unsigned long long i;
	for(i=2;i<semiprime;i++)
		{
		if(semiprime % i==0)
			{
			return i;
			}
		}
	return 0;
	}

int sort_primes(const void *a, const void *b)
	{
	unsigned long long aa=*((unsigned int *) a);
	unsigned long long bb=*((unsigned int *) b);
	if(aa<bb)
		{
		return -1;
		}
	else if(aa>bb)
		{
		return 1;
		}
	return 0;
	}

int main(int argc,char *argv[])
	{
	unsigned int num_tests,t;
	unsigned int l,i,j;
	char output[101];
	unsigned long long n;
	unsigned long long key[26] = { 1 };
	unsigned long long input[105];
	unsigned long long primes[105];

	scanf("%d",&num_tests);
	for(t=0;t<num_tests;t++)
		{
		scanf(" %llu %d",&n,&l);
		for(i=0;i<l;i++)
			{
			scanf(" %llu",&input[i]);
			}
		primes[0]=calc_prime(input[0]);
		primes[1]=input[0]/primes[0];
		for(i=1;i<l;i++)
			{
			if(input[i] % primes[i]==0)
				{
				primes[i+1]=input[i]/primes[i];
				}
			else if(input[i] % primes[i-1]==0)
				{
				primes[i+1]=input[i]/primes[i-1];
				}
			else
				{
				printf("gah!\n");
				exit(0);
				}
			}

		qsort(primes,l+1,sizeof(primes[0]),sort_primes);
		key[0]=primes[0];
		for(i=1,j=0;i<l+1;i++)
			{
			if(primes[i]!=key[j])
				{
				key[++j]=primes[i];
				}
			}
		for(j=0;(j<26)&&(key[j]);j++)
			{
			if(input[0] % key[j]==0)
				{
				output[0]='A'+j;
				output[1]='A'+j;
				break;
				}
			}	
		for(j++;(j<26)&&(key[j]);j++)
			{
			if(input[0] % key[j]==0)
				{
				output[1]='A'+j;
				break;
				}
			}
		for(i=1;i<l;i++)
			{
			if(input[i] % key[output[i]-'A']==0)
				{
				for(j=0;(j<26)&&(key[j]);j++)
					{
					if(key[output[i]-'A'] * key[j]==input[i])
						{
						output[i+1]='A'+j;
						break;
						}
					}	
				}
			else if(input[i] % key[output[i-1]-'A']==0)
				{
				char tmp=output[i-1];
				output[i-1]=output[i];
				output[i]=tmp;
				for(j=0;(j<26)&&(key[j]);j++)
					{
					if(key[output[i]-'A'] * key[j]==input[i])
						{
						output[i+1]='A'+j;
						break;
						}
					}	
				}
			}
		output[l+1]='\0';
		
		printf("Case #%u: %s\n",t+1,output);
		}
	}
