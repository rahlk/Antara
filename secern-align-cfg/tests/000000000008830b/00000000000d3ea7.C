#include<stdio.h>
int decrypt(int ,int ,int ,int[]);
int next_prime(int,int);
int isnotprime(int);
int* sort_eliminate_repeat(int[],int);
int find_index(int ,int[],int);
int main()
{
	int t,i,j,n,l,arr[100];
	printf("Enter the no of test cases: ");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		fflush(stdin);
		printf("Enter the max val N and length L: ");
		scanf("%d%d",&n,&l);
		printf("Enter the list:");
		for(j=0;j<l;j++)
		{
			scanf("%d",&arr[j]);
		}
		decrypt(t,n,l,arr);
	}
	return 0;
}
int decrypt(int t,int n,int l,int arr[])
{
	int i,prime[101],prime_num=2,*sprime,prime2,index;
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
			while((arr[i]%prime_num)!=0)
			{
				prime_num=next_prime(prime_num,arr[i]);
			}
			prime2=arr[i]/prime_num;
			if((arr[i+1]%prime2)==0)
			{
				prime[i+1]=prime2;
				prime[i]=prime_num;
			}
			else
			{
				prime[i]=prime2;
				prime[i+1]=prime_num;
			}
		}
		else
		{
			prime[i+1]=arr[i]/prime[i];
		}
	}
	sprime=sort_eliminate_repeat(prime,l+1);
	printf("Case #%d: ",t);
	for(i=0;i<=l;i++)
	{
		index=find_index(prime[i],sprime,l+1);
		printf("%c",index+65);
	}
	break ;
}
int next_prime(int num,int lim)
{
	num=num+1;
	for(;isnotprime(num)&&num<lim;num=num+1);
	return num;
}
int isnotprime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			return 1;
	}
	return 0;
}
int* sort_eliminate_repeat(int arr[],int n)
{
	int c,d,swap;
	for (c = 0 ; c < n - 1; c++)
  	{
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1]) /* For decreasing order use < */
      {
        swap     = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
	}
	for(c=0;c<n-1;c++)
	{
		if(arr[c]==arr[c+1])
		{
			for(d=c;d<n;d++)
			{
				arr[d]=arr[d+1];
			}
		}
	}
	return arr;
}
int find_index(int num,int arr[],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		if(arr[i]==num)
		{
			return i;
		}
	}
	return 0;
}
