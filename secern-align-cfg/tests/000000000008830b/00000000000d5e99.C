#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int isPrime(int n)
{
	int i,f;
	for(i=2;i<n/2;i++)
		if(n%i == 0)
			return 0;
	return 1;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

void sort(int arr[],int n)
{
	int i,j,a;
	for(i = 0; i < n; ++i) 
    {
        for(j = i + 1; j < n; ++j)
        {
            if(arr[i] > arr[j]) 
            {
                a =  arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}


void assign(int crypt[],int n,int decoder[])
{
	int i,j=1;
	decoder[0] = crypt[0];
	for(i=1;i<n;i++)
		if(crypt[i] != crypt[i-1])
			decoder[j++] = crypt[i];
}

int main()
{
	int t,m,mtemp;
	scanf("%d",&t);
	m = t;
	int len[t];
	char sol[t][101];
	while(t--)
	{
		int n,l;
		scanf("%d %d",&n,&l);
		int x,y=0,in[l],ltemp,i,j,crypt[l+1],crypt1[l+1],decoder[26];
		ltemp = l;
		while(l--)
			scanf("%d",&in[ltemp-l-1]);
		for(i=3;i<=n;i+=2)
		{
			if(in[0]%i == 0 && in[1]%i != 0 && isPrime(i))
			{
				x = i;
				break;
			}
			if(in[0]%i == 0 && in[1]%i == 0 && isPrime(i))
			{
				x = in[0]/i;
				break;
			}	
		}
		l = ltemp;
		for(i=0;i<l;i++)
		{
			crypt[i] = x;
			x = in[i]/x;
		}
		crypt[i] = x;
		for(i=0;i<=l;i++)
			crypt1[i] = crypt[i];
		//sort(crypt,0,l+1);
		qsort(crypt, l+1, sizeof(int), cmpfunc);
		assign(crypt,l+1,decoder);
		for(i=0;i<=l;i++)
		{
			for(j=0;j<26;j++)
			{
				if(crypt1[i] == decoder[j])
				{
					sol[m-t-1][y++] = j+65;
					break;
				}
			}
		}
		len[m-t-1] = y;
	}
	mtemp = m;
	while(m--)
	{
		printf("Case #%d: ",mtemp-m);
		for(int i=0;i<len[mtemp-m-1];i++)
			printf("%c",sol[mtemp-m-1][i]);
		printf("\n");
	}

	return 0;
}

